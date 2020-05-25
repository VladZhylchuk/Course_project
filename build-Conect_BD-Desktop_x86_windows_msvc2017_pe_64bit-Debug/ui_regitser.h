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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regitser
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *password;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *repeated_password;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *password_hint;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QCheckBox *isAdmin;
    QPushButton *SignUp;

    void setupUi(QDialog *regitser)
    {
        if (regitser->objectName().isEmpty())
            regitser->setObjectName(QString::fromUtf8("regitser"));
        regitser->resize(216, 342);
        widget = new QWidget(regitser);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 191, 321));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        username = new QLineEdit(widget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setEnabled(true);

        verticalLayout_4->addWidget(username);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        password = new QLineEdit(widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(password);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        repeated_password = new QLineEdit(widget);
        repeated_password->setObjectName(QString::fromUtf8("repeated_password"));
        repeated_password->setEchoMode(QLineEdit::Password);
        repeated_password->setCursorMoveStyle(Qt::VisualMoveStyle);

        verticalLayout_2->addWidget(repeated_password);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        password_hint = new QLineEdit(widget);
        password_hint->setObjectName(QString::fromUtf8("password_hint"));

        verticalLayout->addWidget(password_hint);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        isAdmin = new QCheckBox(widget);
        isAdmin->setObjectName(QString::fromUtf8("isAdmin"));

        horizontalLayout->addWidget(isAdmin);


        verticalLayout_5->addLayout(horizontalLayout);

        SignUp = new QPushButton(widget);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));
        QFont font1;
        font1.setPointSize(15);
        SignUp->setFont(font1);

        verticalLayout_5->addWidget(SignUp);


        retranslateUi(regitser);

        QMetaObject::connectSlotsByName(regitser);
    } // setupUi

    void retranslateUi(QDialog *regitser)
    {
        regitser->setWindowTitle(QCoreApplication::translate("regitser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("regitser", "login", nullptr));
        label_3->setText(QCoreApplication::translate("regitser", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("regitser", "Repeat Password", nullptr));
        label_2->setText(QCoreApplication::translate("regitser", "Hint", nullptr));
        label_4->setText(QCoreApplication::translate("regitser", "Admin", nullptr));
        isAdmin->setText(QString());
        SignUp->setText(QCoreApplication::translate("regitser", "SignUp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regitser: public Ui_regitser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGITSER_H
