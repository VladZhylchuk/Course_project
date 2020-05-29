/********************************************************************************
** Form generated from reading UI file 'adminaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINACCOUNT_H
#define UI_ADMINACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminAccount
{
public:
    QPushButton *pushButton;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QSpinBox *spinBox;
    QFrame *line;

    void setupUi(QDialog *AdminAccount)
    {
        if (AdminAccount->objectName().isEmpty())
            AdminAccount->setObjectName(QString::fromUtf8("AdminAccount"));
        AdminAccount->resize(511, 396);
        pushButton = new QPushButton(AdminAccount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 320, 91, 31));
        label_6 = new QLabel(AdminAccount);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 181, 171));
        layoutWidget = new QWidget(AdminAccount);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 10, 200, 128));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout_2);

        spinBox = new QSpinBox(AdminAccount);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(90, 240, 42, 22));
        line = new QFrame(AdminAccount);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 0, 16, 401));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(AdminAccount);

        QMetaObject::connectSlotsByName(AdminAccount);
    } // setupUi

    void retranslateUi(QDialog *AdminAccount)
    {
        AdminAccount->setWindowTitle(QCoreApplication::translate("AdminAccount", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminAccount", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\204\321\226\320\273\321\214\320\274", nullptr));
        label_6->setText(QCoreApplication::translate("AdminAccount", "\320\235\320\260\320\267\320\262\320\260 ", nullptr));
        label_4->setText(QCoreApplication::translate("AdminAccount", "\320\235\320\260\320\267\320\262\320\260 ", nullptr));
        label->setText(QCoreApplication::translate("AdminAccount", "\320\226\320\260\320\275\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("AdminAccount", "\320\242\321\200\320\270\320\262\320\260\320\273\321\226\321\201\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("AdminAccount", "\320\221\321\216\320\264\320\266\320\265\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("AdminAccount", "\320\240\321\226\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAccount: public Ui_AdminAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINACCOUNT_H
