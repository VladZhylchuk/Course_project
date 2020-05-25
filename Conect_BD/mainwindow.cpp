#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "regitser.h"
#include<QDebug>
#include "connect_db.h"


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


    bool user_exist = false;
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

        while(check_user_exists.next()){
            QString database_username = check_user_exists.record().value(1).toString();
            QString database_password = check_user_exists.record().value(2).toString();

            database_username = removeSpaces(database_username);
            database_password = removeSpaces(database_password);

            if(database_username == username )
            {
                if(database_password == password)
                {
                    QMessageBox::information(this,"","Entered successfully");
                    show_message = false;
                    break;
                }
                else
                {
                    QMessageBox::information(this,"","Check your password");
                    show_message = false;
                    break;
                }

            }
            else if (show_message)
            {
                QMessageBox::information(this,"","Check your login");
                //QMessageBox::YesRole
                show_message = true;
                break;
            }
        }
    }
    else
    {
        QMessageBox::warning(this,"","enter your login/password please");
        show_message = false;
    }



    //    //Внесення даних про нового користувача до таблиці
    //    if(user_exist == true && password != nullptr)
    //    {
    //        QString registration_info = "INSERT INTO [dbo].[Default_Users]([login],[password])" "VALUES(:login,:password)";


    //        QSqlQuery registration_query  ;
    //        registration_query.prepare(registration_info);

    //        registration_query.bindValue(":login",username);
    //        registration_query.bindValue(":password",password);
    //        registration_query.exec();
    //        QMessageBox::warning(this,"","SUCCESS");
    //        ui->username->setText("");
    //        ui->password->setText("");
    //    }
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
    MainWindow main;
    if(ui->password->text() != nullptr)
        main.on_Submit_clicked();
}


