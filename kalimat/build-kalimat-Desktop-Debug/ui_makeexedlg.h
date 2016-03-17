/********************************************************************************
** Form generated from reading UI file 'makeexedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEEXEDLG_H
#define UI_MAKEEXEDLG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MakeExeDlg
{
public:
    QGroupBox *groupBox;
    QTextBrowser *txtExePath;
    QPushButton *btnSelectExeLocation;
    QGroupBox *groupBox_2;
    QRadioButton *optIco1;
    QRadioButton *optIco2;
    QRadioButton *optIco3;
    QRadioButton *optCustomIcon;
    QPushButton *btnSelectIcon;
    QGroupBox *groupBox_3;
    QLabel *label;
    QRadioButton *optCopyDll;
    QRadioButton *optDontCopyDll;
    QPushButton *btnMakeExe;
    QPushButton *btnCancel;

    void setupUi(QDialog *MakeExeDlg)
    {
        if (MakeExeDlg->objectName().isEmpty())
            MakeExeDlg->setObjectName(QStringLiteral("MakeExeDlg"));
        MakeExeDlg->resize(485, 373);
        MakeExeDlg->setLayoutDirection(Qt::RightToLeft);
        MakeExeDlg->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        groupBox = new QGroupBox(MakeExeDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 451, 121));
        txtExePath = new QTextBrowser(groupBox);
        txtExePath->setObjectName(QStringLiteral("txtExePath"));
        txtExePath->setGeometry(QRect(10, 20, 431, 51));
        QPalette palette;
        QBrush brush(QColor(177, 177, 177, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush1(QColor(202, 202, 202, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        QBrush brush2(QColor(212, 208, 200, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        txtExePath->setPalette(palette);
        txtExePath->setAutoFillBackground(false);
        txtExePath->setReadOnly(true);
        btnSelectExeLocation = new QPushButton(groupBox);
        btnSelectExeLocation->setObjectName(QStringLiteral("btnSelectExeLocation"));
        btnSelectExeLocation->setGeometry(QRect(330, 80, 111, 31));
        groupBox_2 = new QGroupBox(MakeExeDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 130, 451, 80));
        optIco1 = new QRadioButton(groupBox_2);
        optIco1->setObjectName(QStringLiteral("optIco1"));
        optIco1->setGeometry(QRect(371, 20, 61, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/exe1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        optIco1->setIcon(icon);
        optIco1->setIconSize(QSize(32, 32));
        optIco1->setChecked(true);
        optIco2 = new QRadioButton(groupBox_2);
        optIco2->setObjectName(QStringLiteral("optIco2"));
        optIco2->setGeometry(QRect(300, 20, 61, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/exe2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        optIco2->setIcon(icon1);
        optIco2->setIconSize(QSize(32, 32));
        optIco3 = new QRadioButton(groupBox_2);
        optIco3->setObjectName(QStringLiteral("optIco3"));
        optIco3->setGeometry(QRect(220, 20, 61, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/exe3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        optIco3->setIcon(icon2);
        optIco3->setIconSize(QSize(32, 32));
        optCustomIcon = new QRadioButton(groupBox_2);
        optCustomIcon->setObjectName(QStringLiteral("optCustomIcon"));
        optCustomIcon->setGeometry(QRect(91, 30, 121, 21));
        btnSelectIcon = new QPushButton(groupBox_2);
        btnSelectIcon->setObjectName(QStringLiteral("btnSelectIcon"));
        btnSelectIcon->setEnabled(false);
        btnSelectIcon->setGeometry(QRect(10, 50, 75, 23));
        groupBox_3 = new QGroupBox(MakeExeDlg);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 210, 451, 101));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 431, 51));
        label->setWordWrap(true);
        optCopyDll = new QRadioButton(groupBox_3);
        optCopyDll->setObjectName(QStringLiteral("optCopyDll"));
        optCopyDll->setGeometry(QRect(351, 60, 51, 20));
        optCopyDll->setChecked(true);
        optDontCopyDll = new QRadioButton(groupBox_3);
        optDontCopyDll->setObjectName(QStringLiteral("optDontCopyDll"));
        optDontCopyDll->setGeometry(QRect(281, 60, 51, 20));
        btnMakeExe = new QPushButton(MakeExeDlg);
        btnMakeExe->setObjectName(QStringLiteral("btnMakeExe"));
        btnMakeExe->setEnabled(true);
        btnMakeExe->setGeometry(QRect(334, 330, 121, 23));
        btnCancel = new QPushButton(MakeExeDlg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(234, 330, 91, 23));

        retranslateUi(MakeExeDlg);

        btnMakeExe->setDefault(true);


        QMetaObject::connectSlotsByName(MakeExeDlg);
    } // setupUi

    void retranslateUi(QDialog *MakeExeDlg)
    {
        MakeExeDlg->setWindowTitle(QApplication::translate("MakeExeDlg", "\330\265\331\206\330\271 \331\205\331\204\331\201 \330\252\331\206\331\201\331\212\330\260\331\212", 0));
        groupBox->setTitle(QApplication::translate("MakeExeDlg", "\331\205\331\203\330\247\331\206 \330\247\331\204\331\205\331\204\331\201 \330\247\331\204\330\252\331\206\331\201\331\212\330\260\331\212", 0));
        btnSelectExeLocation->setText(QApplication::translate("MakeExeDlg", "\330\247\330\256\330\252\330\261 \330\247\331\204\331\205\331\203\330\247\331\206", 0));
        groupBox_2->setTitle(QApplication::translate("MakeExeDlg", "\330\247\331\204\330\265\331\210\330\261\330\251 \330\247\331\204\330\261\331\205\330\262\331\212\330\251", 0));
        optIco1->setText(QString());
        optIco2->setText(QString());
        optIco3->setText(QString());
        optCustomIcon->setText(QApplication::translate("MakeExeDlg", "\330\263\331\210\331\201 \330\243\330\256\330\252\330\247\330\261", 0));
        btnSelectIcon->setText(QApplication::translate("MakeExeDlg", "\330\247\330\256\330\252\330\261 \330\247\331\204\330\265\331\210\330\261\330\251", 0));
        groupBox_3->setTitle(QApplication::translate("MakeExeDlg", "\330\247\331\204\331\205\331\203\330\252\330\250\330\247\330\252 \330\247\331\204\331\205\330\267\331\204\331\210\330\250\330\251", 0));
        label->setText(QApplication::translate("MakeExeDlg", "<html><head/><body><p dir=\"rtl\" align=\"right\">\331\212\330\255\330\252\330\247\330\254 \330\250\330\261\331\206\330\247\331\205\330\254\331\203 \331\204\330\271\330\257\330\257 \331\205\331\206 \330\247\331\204\331\205\331\203\330\252\330\250\330\247\330\252 \331\201\331\212 \330\265\331\210\330\261\330\251 DLL. \331\204\331\212\330\271\331\205\331\204\330\233 \331\207\331\204 \330\252\330\261\331\212\330\257 \331\206\330\263\330\256\330\251 \331\205\331\206 \330\252\331\204\331\203 \330\247\331\204\331\205\331\203\330\252\330\250\330\247\330\252 \331\201\331\212 \331\206\331\201\330\263 \330\247\331\204\331\205\331\203\330\247\331\206 \330\247\331\204\330\260\331\212 \330\263\331\212\330\252\331\205 \331\201\331\212\331\207 \330\265\331\206\330\271 \330\247\331\204\331\205\331\204\331\201 \330\247\331\204\330\252\331\206\331\201\331\212\330\260\331\212\330\237</p></body></html>", 0));
        optCopyDll->setText(QApplication::translate("MakeExeDlg", "\331\206\330\271\331\205", 0));
        optDontCopyDll->setText(QApplication::translate("MakeExeDlg", "\331\204\330\247", 0));
        btnMakeExe->setText(QApplication::translate("MakeExeDlg", "\330\265\331\206\330\271 \330\247\331\204\331\205\331\204\331\201 \330\247\331\204\330\252\331\206\331\201\331\212\330\260\331\212", 0));
        btnCancel->setText(QApplication::translate("MakeExeDlg", "\330\245\331\204\330\272\330\247\330\241 \330\247\331\204\330\271\331\205\331\204\331\212\330\251", 0));
    } // retranslateUi

};

namespace Ui {
    class MakeExeDlg: public Ui_MakeExeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEEXEDLG_H
