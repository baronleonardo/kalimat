/********************************************************************************
** Form generated from reading UI file 'savechangedfiles.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECHANGEDFILES_H
#define UI_SAVECHANGEDFILES_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveChangedFiles
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *SaveChangedFiles)
    {
        if (SaveChangedFiles->objectName().isEmpty())
            SaveChangedFiles->setObjectName(QStringLiteral("SaveChangedFiles"));
        SaveChangedFiles->setWindowModality(Qt::ApplicationModal);
        SaveChangedFiles->resize(391, 340);
        SaveChangedFiles->setLayoutDirection(Qt::RightToLeft);
        SaveChangedFiles->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        SaveChangedFiles->setModal(true);
        buttonBox = new QDialogButtonBox(SaveChangedFiles);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Discard|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);
        listWidget = new QListWidget(SaveChangedFiles);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 371, 211));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setUniformItemSizes(true);
        label = new QLabel(SaveChangedFiles);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 331, 41));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));

        retranslateUi(SaveChangedFiles);

        QMetaObject::connectSlotsByName(SaveChangedFiles);
    } // setupUi

    void retranslateUi(QDialog *SaveChangedFiles)
    {
        SaveChangedFiles->setWindowTitle(QString());
        label->setText(QApplication::translate("SaveChangedFiles", "\331\207\330\260\331\207 \330\247\331\204\331\205\331\204\331\201\330\247\330\252 \331\202\330\257 \330\252\330\272\331\212\330\261\330\252! \330\255\331\201\330\270 \330\247\331\204\330\252\330\272\331\212\331\212\330\261\330\247\330\252\330\237", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveChangedFiles: public Ui_SaveChangedFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECHANGEDFILES_H
