#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connect_db.h"

#include <QtSql>
#include<QMessageBox>
#include <QSqlQuery>
#include<QDebug>
#include"connect_db.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //login *logwin;

    QSqlDatabase db;
    QSqlQuery query;

private slots:
    void on_Submit_clicked();
    void on_SignUp_clicked();
    void on_username_returnPressed();
    void on_password_returnPressed();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
