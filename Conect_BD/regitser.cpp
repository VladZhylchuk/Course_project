#include "regitser.h"
#include "ui_regitser.h"
#include"mainwindow.h"
#include "QMessageBox"

regitser::regitser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regitser)
{
    ui->setupUi(this);
    ui->username->setFocus();


    //MainWindow main;


//    main.db = QSqlDatabase::addDatabase("QODBC");
//    //db.setDatabaseName("DRIVER={SQL Server};SERVER="+ui->lineEdit->text()+";DATABASE="+ui->lineEdit_2->text()+";Trusted_Connection=yes;");

//    main.db .setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-MEP0SC5;DATABASE=Mydb;Trusted_Connection=yes;");


//    if(!main.db.open())
//    {
//        QMessageBox::critical(this, "Error", main.db.lastError().text());

//    }

}

regitser::~regitser()
{
    delete ui;
}



void regitser::on_username_returnPressed()
{
    if(ui->username->text() != nullptr)
    {
        ui->password->setFocus();
    }
}

void regitser::on_password_returnPressed()
{
    if(ui->repeated_password->text() == nullptr &&  ui->password->text() != nullptr)
    {
        ui->repeated_password->setFocus();
    }
}
void regitser::on_SignUp_clicked()
{
    bool user_exist = true;
    QString username = ui->username->text();
    QString password = ui->password->text();
    QString repeated_password = ui->repeated_password->text();
    bool admin = ui->isAdmin->isChecked();

    if(repeated_password  != password && ui->repeated_password->text() != nullptr)
    {
        QMessageBox::warning(this,"Warning","Passwords not same");
    }

    QString allusers = "exec ShowAll";
    QSqlQuery check_user_exists;

    //Надо фіксить
    if(username != nullptr && password != nullptr)
    {
        //Перевірка чи існує користувач з введеним ім'ям
        check_user_exists.prepare(allusers);
        check_user_exists.exec();

        while(check_user_exists.next()){
            QString name = check_user_exists.record().value(1).toString();
            if(name.contains(username))
            {
                QMessageBox::warning(this,"","This user already exists");
                user_exist = false;
                break;
            }
        }
    }
    else
    {
        QMessageBox::warning(this,"","enter your login/password please");
    }



    //Внесення даних про нового користувача до таблиці
    if(user_exist == true && password != nullptr)
    {
        QString registration_info = "INSERT INTO [dbo].[Default_Users]([login],[password])" "VALUES(:login,:password)";


        QSqlQuery registration_query  ;
        registration_query.prepare(registration_info);

        registration_query.bindValue(":login",username);
        registration_query.bindValue(":password",password);
        registration_query.exec();
        QMessageBox::warning(this,"","SUCCESS");
        ui->username->setText("");
        ui->password->setText("");
    }
    qDebug()<<"Finally";

}



void regitser::on_isAdmin_stateChanged(int arg1)
{
     QMessageBox::warning(this,"","checked");
}
