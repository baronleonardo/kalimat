/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QStringLiteral("AboutDlg"));
        AboutDlg->resize(400, 312);
        buttonBox = new QDialogButtonBox(AboutDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        textBrowser = new QTextBrowser(AboutDlg);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 371, 261));

        retranslateUi(AboutDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QApplication::translate("AboutDlg", "\330\271\331\206 \331\203\331\204\331\205\330\247\330\252", 0));
        textBrowser->setHtml(QApplication::translate("AboutDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/logo/logo.PNG\" /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\203\331\204\331\205\330\247\330\252 - \331\204\330\272\330\251 \330\247\331\204\330\250\330\261\331\205\330\254\330\251 \330\247\331\204\330\271\330\261\330\250\331\212\330\251 \330\247\331\204\330\254\331\205\331\212\331\204\330\251</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\255\331\202\331\210\331\202 \330\247\331\204\330\267\330\250\330\271 \331\205\330\255\331\201\331\210\330\270\330\251 \302\251 2010\330\214 2011\330\214 2012 \331\205\330\255\331\205\330\257 \330\263\330\247\331\205\331\212 \330\271\331\204\331\212 \331\210\330\247\331\204\331\205\330\263\330\247\331\207\331\205\331\210\331\206</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\207\330\260\330\247 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254 \331\205\331\201\330\252\331\210\330\255 \330\247\331\204\331\205\330\265\330\257\330\261 \330\252\330\255\330\252 \330\261\330\256\330\265"
                        "\330\251 \330\247\330\250\330\247\330\252\330\264\331\212 2.0</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">______________</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\204\331\204\330\247\330\252\330\265\330\247\331\204 \330\250\331\206\330\247</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">samy2004@gmail.com</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
