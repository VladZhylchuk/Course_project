/********************************************************************************
** Form generated from reading UI file 'regitser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGITSER_H
#define UI_REGITSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regitser
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *repeated_password;
    QLabel *label;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QCheckBox *isAdmin;
    QPushButton *SignUp;
    QLineEdit *username;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *regitser)
    {
        if (regitser->objectName().isEmpty())
            regitser->setObjectName(QString::fromUtf8("regitser"));
        regitser->resize(216, 275);
        gridLayout_2 = new QGridLayout(regitser);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        repeated_password = new QLineEdit(regitser);
        repeated_password->setObjectName(QString::fromUtf8("repeated_password"));
        repeated_password->setEchoMode(QLineEdit::Password);
        repeated_password->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout->addWidget(repeated_password, 5, 0, 1, 1);

        label = new QLabel(regitser);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        password = new QLineEdit(regitser);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(regitser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        isAdmin = new QCheckBox(regitser);
        isAdmin->setObjectName(QString::fromUtf8("isAdmin"));

        horizontalLayout->addWidget(isAdmin);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        SignUp = new QPushButton(regitser);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));

        gridLayout->addWidget(SignUp, 7, 0, 1, 1);

        username = new QLineEdit(regitser);
        username->setObjectName(QString::fromUtf8("username"));
        username->setEnabled(true);

        gridLayout->addWidget(username, 1, 0, 1, 1);

        label_3 = new QLabel(regitser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(regitser);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(regitser);

        QMetaObject::connectSlotsByName(regitser);
    } // setupUi

    void retranslateUi(QDialog *regitser)
    {
        regitser->setWindowTitle(QCoreApplication::translate("regitser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("regitser", "login", nullptr));
        label_4->setText(QCoreApplication::translate("regitser", "Admin", nullptr));
        isAdmin->setText(QString());
        SignUp->setText(QCoreApplication::translate("regitser", "SignUp", nullptr));
        label_3->setText(QCoreApplication::translate("regitser", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("regitser", "Repeat Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regitser: public Ui_regitser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGITSER_H
