/**************************************************************************
**   The Kalimat programming language
**   Copyright 2010 Mohamed Samy Ali - samy2004@gmail.com
**   This project is released under the Apache License version 2.0
**   as described in the included license.txt file
**************************************************************************/

#ifndef MYEDIT_H
#define MYEDIT_H

#include "linetracker.h"
#include "Lexer/lexer_incl.h"
#include "Lexer/kalimatlexer.h"
#include <QTextEdit>
#include <QKeyEvent>

class MainWindow;
class LineNumberArea;
bool isParen(QString s );
bool isOpenParen(QString s );
bool isClosedParen(QString s );

class MyEdit : public QTextEdit
{
    Q_OBJECT
    LineTracker lineTracker;
    MainWindow *owner;
    int _line, _column;
    /* The last input char is recorded to prevent the bug that happend if you
      press enter at the end of a line like this
         if expr : <enter>
      and the editor would insert an 'end if' line even if the statement
      already has been completed.
      To solve this problem we will not add a matching 'end if' unless the last
      input character was a colon. This will solve the problem in almost all cases.

      Tto make it more accurate we record the line of the last input char
       and not add 'end if' unless the last input char is a colon on the current line.
    */
    QString lastInputChar;
    int lastInputLine;
public:
    MyEdit(MainWindow *owner);
    void setRtl();
    void centerCursorVerticallyIfNeeded();
    int line();
    int column();

    int lineOfPos(int pos);
    int startPosOfLine(int line);
    void tabBehavior();
    void shiftTabBehavior();
    void enterKeyBehavior(QKeyEvent *ev);
    void colonBehavior(QKeyEvent *ev);
    LineInfo currentLine();
    int indentOfLine(LineInfo li);
    QString textOfLine(LineInfo line);
    void indentAndTerminate(LineInfo prevLine, QString termination);
    int calculateDeindent(int by, QString lineText);
    void eraseFromBeginOfLine(LineInfo li, int toErase);
    void deindentLine(int line, int by);
    void updateLineNumberAreaFont();

    void jumpToPos(int pos);
    void toggleBreakpoint(int line);
    bool eventFilter(QObject *sender, QEvent *event);

    const QVector<Token> lexizeWithRecovery();
    Token getMatchingParen(int indexOfTok, Token &tok);
private:
    LineNumberArea *lineNumberArea;
protected:
    void resizeEvent(QResizeEvent *event);
signals:
    void linkClickedEvent(MyEdit *source, QString href);
private slots:
    void keyPressEvent(QKeyEvent *);
    void mousePressEvent(QMouseEvent *e);
    void textChangedEvent();
    void selectionChangedEvent();
    void paintEvent(QPaintEvent *e);

    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(int lineCount);
};

#endif // MYEDIT_H
