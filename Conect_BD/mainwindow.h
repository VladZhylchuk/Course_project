#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "connect_db.h"

#include <QtSql>
#include<QMessageBox>
#include <QSqlQuery>
#include<QDebug>
#include"connect_db.h"
#include "useraccount.h"
#include "adminaccount.h"
#include "about_program.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase db;
    QSqlQuery query;

private slots:
    void on_Submit_clicked();
    void on_SignUp_clicked();
    void on_username_returnPressed();
    void on_password_returnPressed();
    void on_password_forget_clicked();





    void on_About_clicked();

private:
    Ui::MainWindow *ui;
   // UserAccount *user_account;
    //AdminAccount *admin_account;
};
#endif // MAINWINDOW_H
