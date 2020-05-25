#include "connect_db.h"
#include "ui_login.h"
#include<QSqlError>
#include<QMessageBox>
#include <QSqlQuery>
#include<QDebug>


login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    //ui->lineEdit_4->setEchoMode(QLineEdit::Password);

    mes = new QMessageBox();
//    db = QSqlDatabase::addDatabase("QODBC");
//    //db.setDatabaseName("DRIVER={SQL Server};SERVER="+ui->lineEdit->text()+";DATABASE="+ui->lineEdit_2->text()+";Trusted_Connection=yes;");

//    db.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-MEP0SC5;DATABASE=Mydb;Trusted_Connection=yes;");


//    if(!db.open())
//    {
//        QMessageBox::critical(this, "Error", db.lastError().text());

//    }
//    else
//    {
//        QSqlQuery *query = new QSqlQuery(db);
//        query->exec("SELECT * FROM [Mydb].[dbo].[Default_Users]");

//        while(query->next())
//        {
//            QMessageBox::information(this,"Conected",query->value(1).toString());
//        }
//        QMessageBox::information(this,"Conected","Conected");
//    }

}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{


}
