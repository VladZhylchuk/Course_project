/********************************************************************************
** Form generated from reading UI file 'about_program.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_PROGRAM_H
#define UI_ABOUT_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About_Program
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *About_Program)
    {
        if (About_Program->objectName().isEmpty())
            About_Program->setObjectName(QString::fromUtf8("About_Program"));
        About_Program->resize(273, 166);
        About_Program->setSizeGripEnabled(false);
        About_Program->setModal(false);
        layoutWidget = new QWidget(About_Program);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 212, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(About_Program);

        QMetaObject::connectSlotsByName(About_Program);
    } // setupUi

    void retranslateUi(QDialog *About_Program)
    {
        About_Program->setWindowTitle(QCoreApplication::translate("About_Program", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("About_Program", "\320\232\321\203\321\200\321\201\320\276\320\262\320\260 \321\200\320\276\320\261\320\276\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("About_Program", "\320\235\320\260\320\277\320\270\321\201\320\260\320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203 \320\226\320\270\320\273\321\214\321\207\321\203\320\272 \320\222\320\273\320\260\320\264\320\270\321\201\320\273\320\260\320\262\320\262\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About_Program: public Ui_About_Program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_PROGRAM_H
