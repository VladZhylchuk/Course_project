/********************************************************************************
** Form generated from reading UI file 'useraccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNT_H
#define UI_USERACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_UserAccount
{
public:
    QListView *listView;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *UserAccount)
    {
        if (UserAccount->objectName().isEmpty())
            UserAccount->setObjectName(QString::fromUtf8("UserAccount"));
        UserAccount->resize(571, 484);
        listView = new QListView(UserAccount);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(200, 170, 256, 192));
        commandLinkButton = new QCommandLinkButton(UserAccount);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 0, 61, 61));
        commandLinkButton->setLayoutDirection(Qt::RightToLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icons/Back_Arrow.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        commandLinkButton->setIconSize(QSize(40, 40));

        retranslateUi(UserAccount);

        QMetaObject::connectSlotsByName(UserAccount);
    } // setupUi

    void retranslateUi(QDialog *UserAccount)
    {
        UserAccount->setWindowTitle(QCoreApplication::translate("UserAccount", "Dialog", nullptr));
        commandLinkButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserAccount: public Ui_UserAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNT_H
