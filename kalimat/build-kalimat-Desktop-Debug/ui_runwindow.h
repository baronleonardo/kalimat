/********************************************************************************
** Form generated from reading UI file 'runwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNWINDOW_H
#define UI_RUNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunWindow
{
public:
    QAction *actionPrint;
    QAction *actionGC;
    QWidget *centralwidget;

    void setupUi(QMainWindow *RunWindow)
    {
        if (RunWindow->objectName().isEmpty())
            RunWindow->setObjectName(QStringLiteral("RunWindow"));
        RunWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunWindow->sizePolicy().hasHeightForWidth());
        RunWindow->setSizePolicy(sizePolicy);
        RunWindow->setBaseSize(QSize(800, 600));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setItalic(true);
        RunWindow->setFont(font);
        RunWindow->setLayoutDirection(Qt::RightToLeft);
        actionPrint = new QAction(RunWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionGC = new QAction(RunWindow);
        actionGC->setObjectName(QStringLiteral("actionGC"));
        centralwidget = new QWidget(RunWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        RunWindow->setCentralWidget(centralwidget);

        retranslateUi(RunWindow);

        QMetaObject::connectSlotsByName(RunWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RunWindow)
    {
        RunWindow->setWindowTitle(QApplication::translate("RunWindow", "\330\252\331\206\331\201\331\212\330\260 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", 0));
        actionPrint->setText(QApplication::translate("RunWindow", "Print", 0));
        actionPrint->setShortcut(QApplication::translate("RunWindow", "Ctrl+P", 0));
        actionGC->setText(QApplication::translate("RunWindow", "GC", 0));
        actionGC->setShortcut(QApplication::translate("RunWindow", "Ctrl+G", 0));
    } // retranslateUi

};

namespace Ui {
    class RunWindow: public Ui_RunWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNWINDOW_H
