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
}

regitser::~regitser()
{
    delete ui;
}

int checked(bool check)
{
    if(check)
        return 1;
    else
        return 0;
}

QString removeSpaces2(QString word) {
    QString newWord;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != ' ') {
            newWord += word[i];
        }
    }
    return newWord;
}

void regitser::on_username_returnPressed()
{
    if(ui->username->text() != nullptr)
        ui->password->setFocus();
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
    //введення інформації про користувача
    bool isAdmin = ui->isAdmin->isChecked();
    bool user_exist = true;
    qDebug() << isAdmin;
    QString username = ui->username->text();
    QString password = ui->password->text();
    QString repeated_password = ui->repeated_password->text();
    QString password_hint =  ui->password_hint->text();

    if(repeated_password  != password && ui->repeated_password->text() != nullptr)
    {
        QMessageBox::warning(this,"Warning","Passwords not same");
    }





    //Надо фіксить
    QString allusers = "exec ShowAll";
    QSqlQuery check_user_exists;
    if(username != nullptr && password != nullptr)
    {
        //Перевірка чи існує користувач з введеним ім'ям
        check_user_exists.prepare(allusers);
        check_user_exists.exec();

        while(check_user_exists.next()){
            QString name = check_user_exists.record().value(1).toString();
            name = removeSpaces2(name);
            if(name == username)
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
        //QString registration_info = "INSERT INTO [dbo].[Default_Users]([login],[password])" "VALUES(:login,:password)";
          QString registration_info = "INSERT INTO [dbo].[Default_Users]([login],[password],[admin],[password_hint])VALUES(:login,:password,:admin,:password_hint)";

        QSqlQuery registration_query  ;
        registration_query.prepare(registration_info);

        registration_query.bindValue(":login",username);
        registration_query.bindValue(":password",password);
        registration_query.bindValue(":admin",checked(isAdmin));
        registration_query.bindValue(":password_hint",password_hint);

        registration_query.exec();
        QMessageBox::warning(this,"","SUCCESS");
        close();
    }
    qDebug()<<"Finally";

}



