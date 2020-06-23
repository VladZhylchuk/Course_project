#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>
#include "connect_db.h"

#include <QtSql>
#include<QMessageBox>
#include <QSqlQuery>
#include<QDebug>
#include"connect_db.h"
#include "regitser.h"
#include "adminaccount.h"
#include "useraccount.h"

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_username_returnPressed();

    void on_password_returnPressed();

    void on_Submit_clicked();

    void on_SignUp_clicked();

private:
    Ui::registration *ui;
    UserAccount *user_account;
    AdminAccount *admin_account;


};

#endif // REGISTRATION_H
