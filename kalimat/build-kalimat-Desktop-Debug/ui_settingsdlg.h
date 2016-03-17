/********************************************************************************
** Form generated from reading UI file 'settingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDLG_H
#define UI_SETTINGSDLG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *chkShowXYInRunWindow;
    QSpinBox *spnEditorFontSize;
    QLabel *label;
    QSpinBox *spnUpdateCodeModel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lblStandardLibPath;
    QPushButton *btnSelectStandardLibPath;
    QFontComboBox *fontComboBox;
    QLabel *label_4;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->resize(468, 242);
        settings->setLayoutDirection(Qt::RightToLeft);
        settings->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        buttonBox = new QDialogButtonBox(settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        chkShowXYInRunWindow = new QCheckBox(settings);
        chkShowXYInRunWindow->setObjectName(QStringLiteral("chkShowXYInRunWindow"));
        chkShowXYInRunWindow->setGeometry(QRect(220, 10, 231, 20));
        spnEditorFontSize = new QSpinBox(settings);
        spnEditorFontSize->setObjectName(QStringLiteral("spnEditorFontSize"));
        spnEditorFontSize->setGeometry(QRect(140, 40, 71, 22));
        spnEditorFontSize->setMinimum(5);
        spnEditorFontSize->setMaximum(40);
        label = new QLabel(settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 40, 141, 20));
        spnUpdateCodeModel = new QSpinBox(settings);
        spnUpdateCodeModel->setObjectName(QStringLiteral("spnUpdateCodeModel"));
        spnUpdateCodeModel->setGeometry(QRect(120, 110, 91, 22));
        spnUpdateCodeModel->setMaximum(100000);
        label_2 = new QLabel(settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 110, 201, 20));
        label_3 = new QLabel(settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 140, 211, 20));
        lblStandardLibPath = new QLabel(settings);
        lblStandardLibPath->setObjectName(QStringLiteral("lblStandardLibPath"));
        lblStandardLibPath->setGeometry(QRect(50, 160, 391, 31));
        lblStandardLibPath->setFrameShape(QFrame::Panel);
        lblStandardLibPath->setFrameShadow(QFrame::Sunken);
        lblStandardLibPath->setIndent(-1);
        btnSelectStandardLibPath = new QPushButton(settings);
        btnSelectStandardLibPath->setObjectName(QStringLiteral("btnSelectStandardLibPath"));
        btnSelectStandardLibPath->setGeometry(QRect(10, 160, 31, 23));
        fontComboBox = new QFontComboBox(settings);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(10, 70, 201, 22));
        label_4 = new QLabel(settings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 80, 71, 20));

        retranslateUi(settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Dialog", 0));
        chkShowXYInRunWindow->setText(QApplication::translate("settings", "\330\247\330\270\331\207\330\247\330\261 \330\247\331\204\330\245\330\255\330\257\330\247\330\253\331\212\330\247\330\252 \331\201\331\212 \330\252\331\206\331\201\331\212\330\260 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", 0));
        label->setText(QApplication::translate("settings", "\330\255\330\254\331\205 \330\247\331\204\330\256\330\267 \331\201\331\212 \330\247\331\204\331\205\330\255\330\261\330\261", 0));
        label_2->setText(QApplication::translate("settings", "\330\252\330\255\330\257\331\212\330\253 \330\250\331\212\330\247\331\206\330\247\330\252 \330\247\331\204\331\203\331\210\330\257 (\330\250\330\247\331\204\331\205\331\212\331\204\331\204\331\212\330\253\330\247\331\206\331\212\330\251)", 0));
        label_3->setText(QApplication::translate("settings", "\331\205\330\263\330\247\330\261 \330\247\331\204\331\205\331\203\330\252\330\250\330\251 \330\247\331\204\330\247\330\263\330\247\330\263\331\212\330\251", 0));
        lblStandardLibPath->setText(QApplication::translate("settings", "TextLabel", 0));
        btnSelectStandardLibPath->setText(QApplication::translate("settings", "...", 0));
        label_4->setText(QApplication::translate("settings", "\330\256\330\267 \330\247\331\204\331\205\330\255\330\261\330\261", 0));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDLG_H
