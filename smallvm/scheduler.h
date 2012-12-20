#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <QQueue>
#include <QSet>
#include <QMutex>
#include <QSemaphore>

#include "blockingqueue.h"

/*
    A scheduler runss processes. Each scheduler is associated with a thread which usually activates it by
    calling various methods. It has two primary methods:

    1. WaitRunning, which wait with a timeout until there is at least one process in the
       'running' queue of the scheduler, ready to be executed.

    2. RunStep, which picks some process from the running queue and runs its instructions for a
       given time slice (say, 30 instructions).

    Those two methods are usually called in a loop in the thread controlling the scheduler.

    The schedule() method is invoked from RunStep. It chooses which method to take from the 'running' queue for execution.
    Before doing that, it takes any methods in the 'timerWaiting' queue and awakens them (by adding them to 'running')
    if their time has elapsed. It is therefore neccessary to keep calling 'RunStep' even if the running queue is empty,
    and is a reason (among others) that WaitRunning has a timeout.

    Each scheduler has a mutex called 'lock'. Since a process is owned by exactly one scheduler there are only
    few situations where locking is needed, mainly:
        (1) In migration of a process between threads
        (2) In communication between processes by channels.
  */
class Process;
class VM;
class Frame;
class Method;

class RunWindow;
class Scheduler
{
    BlockingQueue<Process *> running;
    QQueue<Process *> sleeping;
    QQueue<Process *> timerWaiting;

     int _isRunning;
public:
    Process *runningNow;
    VM *vm;
    QMutex lock;
    RunWindow *runWindow;
public:
    Scheduler(VM *vm);
    void restartOwner();
    inline Process *currentProcess() { return runningNow; }
    QString getFriendlyName();
    inline void waitRunning(unsigned long time = ULONG_MAX) { running.wait(time); }
    inline void waitRunningOnce(unsigned long time = ULONG_MAX) { running.waitOnce(time); }
    void attachProcess(Process *proc);
    void detachProcess(Process *proc);
    int activateElapsedTimers();
    bool schedule();
    bool RunStep(bool singleInstruction=false, int maxtimeSclice=30);
    void finishUpRunningProcess();

    QSet<QQueue<Process *> *> getProcesses();

    Frame *launchProcess(Method *method);
    Frame *launchProcess(Method *method, Process *&proc);
    Frame *launchProcessAsInterrupt(Method *method);
    void awaken(Process *proc);
    void sleepify(Process *proc);
    void makeItWaitTimer(Process *proc, int ms);
    bool hasInterrupts();
    bool isDone();
    bool isRunning();
};

#endif // SCHEDULER_H