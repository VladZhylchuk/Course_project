#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "regitser.h"
#include <QDebug>
#include "connect_db.h"
#include "useraccount.h"
#include "adminaccount.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    db = QSqlDatabase::addDatabase("QODBC");
    //db.setDatabaseName("DRIVER={SQL Server};SERVER="+ui->lineEdit->text()+";DATABASE="+ui->lineEdit_2->text()+";Trusted_Connection=yes;");

    db.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-MEP0SC5;DATABASE=Mydb;Trusted_Connection=yes;");



    if(!db.open())
    {
        QMessageBox::critical(this, "Error", db.lastError().text());

    }
    ui->username->setFocus();

}

MainWindow::~MainWindow()
{
    delete ui;

}



QString removeSpaces(QString word) {
    QString newWord;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != ' ') {
            newWord += word[i];
        }
    }

    return newWord;
}

void MainWindow::on_Submit_clicked()
{

    qDebug()<<"Start";



    QString username = ui->username->text();
    QString password = ui->password->text();
    QStringList results;
    bool show_message = true;

    //використання процедури ShowAll для підтягування данних про всіх зараеєстрованиз користувачів
    QString allusers = "exec ShowAll";
    QSqlQuery check_user_exists;



    if(username != nullptr && password != nullptr)
    {
        //Перевірка чи існує користувач з введеним ім'ям
        check_user_exists.prepare(allusers);
        check_user_exists.exec();

        while(check_user_exists.next())
        {
            QString database_username = check_user_exists.record().value(1).toString();
            QString database_password = check_user_exists.record().value(2).toString();
            QString database_password_hint = check_user_exists.record().value(4).toString();

            database_username = removeSpaces(database_username);
            database_password = removeSpaces(database_password);

            if(database_username == username )
            {
                if(database_password == password)
                {
                    bool isAdmin =  check_user_exists.record().value(3).toBool();
                    if(isAdmin)
                    {
                        hide();
                        show_message = false;
                         // admin_account = new AdminAccount(this);
                          AdminAccount admin_account ;
                          admin_account.setModal(true);
                          admin_account.exec();
                          //admin_account->show();
                        break;
                    }
                    else
                    {
                        show_message = false;
                        this->hide();
                        //user_account = new UserAccount(this);
                        UserAccount user_account;
                        user_account.setModal(true);
                        user_account.exec();
                        //user_account.show();
                        break;
                    }
                }
                else
                {
                    QMessageBox::information(this,"","Wrong password");
                    show_message = false;
                    break;
                }

            }

        }
        if (show_message){QMessageBox::information(this,""," This user does not exist ");}
    }
    else
    {
        QMessageBox::warning(this,"","enter your login/password please");
        show_message = false;
    }
    qDebug()<<"Finally";

}



void MainWindow::on_SignUp_clicked()
{
    regitser regist;
    regist.setModal(true);
    regist.exec();
}




void MainWindow::on_username_returnPressed()
{
    if(ui->username->text() != nullptr)
        ui->password->setFocus();
}

void MainWindow::on_password_returnPressed()
{    
    if(ui->password->text() != nullptr)
        ui->Submit->click();
        ui->password->clearFocus();
}






void MainWindow::on_password_forget_clicked()
{
    QString allusers = "exec ShowAll";
    QSqlQuery check_user_exists;
    QString username = ui->username->text();



    if(username != nullptr )
    {
        check_user_exists.prepare(allusers);
        check_user_exists.exec();

        while(check_user_exists.next())
        {


            QString database_username = check_user_exists.record().value(1).toString();
            QString password_hint = check_user_exists.record().value(4).toString();
            database_username = removeSpaces(database_username);


            if(database_username == username)
            {
                QMessageBox::information(this, "","Your hint is " +  password_hint);
            }
        }
    }
    else
    {
        QMessageBox::information(this, "", "Enter your username please");
    }
}







void MainWindow::on_About_clicked()
{
    About_Program about;
    about.setModal(true);
    about.exec();
}
