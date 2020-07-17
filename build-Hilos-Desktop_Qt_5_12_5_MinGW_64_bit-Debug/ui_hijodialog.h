/********************************************************************************
** Form generated from reading UI file 'hijodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIJODIALOG_H
#define UI_HIJODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_HijoDialog
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *HijoDialog)
    {
        if (HijoDialog->objectName().isEmpty())
            HijoDialog->setObjectName(QString::fromUtf8("HijoDialog"));
        HijoDialog->resize(400, 300);
        listWidget = new QListWidget(HijoDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 60, 256, 192));

        retranslateUi(HijoDialog);

        QMetaObject::connectSlotsByName(HijoDialog);
    } // setupUi

    void retranslateUi(QDialog *HijoDialog)
    {
        HijoDialog->setWindowTitle(QApplication::translate("HijoDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HijoDialog: public Ui_HijoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIJODIALOG_H
