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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConect_database;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *SignUp;
    QPushButton *Submit;
    QLineEdit *username;
    QLabel *label;
    QLineEdit *password;
    QLabel *label_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(800, 600);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionConect_database = new QAction(MainWindow);
        actionConect_database->setObjectName(QString::fromUtf8("actionConect_database"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 170, 311, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SignUp = new QPushButton(layoutWidget);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));

        gridLayout->addWidget(SignUp, 2, 0, 1, 1);

        Submit = new QPushButton(layoutWidget);
        Submit->setObjectName(QString::fromUtf8("Submit"));

        gridLayout->addWidget(Submit, 2, 1, 1, 1);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setInputMethodHints(Qt::ImhEmailCharactersOnly|Qt::ImhLatinOnly);
        username->setInputMask(QString::fromUtf8(""));
        username->setCursorPosition(0);
        username->setDragEnabled(false);
        username->setClearButtonEnabled(true);

        gridLayout->addWidget(username, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);
        password->setClearButtonEnabled(true);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        username->raise();
        SignUp->raise();
        Submit->raise();
        label->raise();
        password->raise();
        label_2->raise();
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
#if QT_CONFIG(shortcut)
        label->setBuddy(username);
        label_2->setBuddy(password);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, Submit);
        QWidget::setTabOrder(Submit, SignUp);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionConect_database);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConect_database->setText(QCoreApplication::translate("MainWindow", "Conect database", nullptr));
        SignUp->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        Submit->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        username->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
