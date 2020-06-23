/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiontest;
    QAction *actionAbout_program;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *password;
    QPushButton *Submit;
    QLabel *label_2;
    QLineEdit *username;
    QPushButton *SignUp;
    QLabel *label;
    QPushButton *password_forget;
    QPushButton *About;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(522, 400);
        MainWindow->setMinimumSize(QSize(500, 400));
        MainWindow->setMaximumSize(QSize(791, 391));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actiontest = new QAction(MainWindow);
        actiontest->setObjectName(QString::fromUtf8("actiontest"));
        actionAbout_program = new QAction(MainWindow);
        actionAbout_program->setObjectName(QString::fromUtf8("actionAbout_program"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 70, 331, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);
        password->setClearButtonEnabled(true);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        Submit = new QPushButton(layoutWidget);
        Submit->setObjectName(QString::fromUtf8("Submit"));

        gridLayout->addWidget(Submit, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setInputMethodHints(Qt::ImhEmailCharactersOnly|Qt::ImhLatinOnly);
        username->setInputMask(QString::fromUtf8(""));
        username->setCursorPosition(0);
        username->setDragEnabled(false);
        username->setClearButtonEnabled(true);

        gridLayout->addWidget(username, 0, 1, 1, 1);

        SignUp = new QPushButton(layoutWidget);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));

        gridLayout->addWidget(SignUp, 2, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        password_forget = new QPushButton(layoutWidget);
        password_forget->setObjectName(QString::fromUtf8("password_forget"));

        verticalLayout->addWidget(password_forget);

        About = new QPushButton(centralwidget);
        About->setObjectName(QString::fromUtf8("About"));
        About->setGeometry(QRect(100, 260, 81, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label_2->setBuddy(password);
        label->setBuddy(username);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, Submit);
        QWidget::setTabOrder(Submit, SignUp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actiontest->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        actionAbout_program->setText(QCoreApplication::translate("MainWindow", "About program", nullptr));
        Submit->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        username->setText(QString());
        SignUp->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        password_forget->setText(QCoreApplication::translate("MainWindow", "Forget password ?", nullptr));
        About->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
