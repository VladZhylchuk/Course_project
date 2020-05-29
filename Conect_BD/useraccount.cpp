#include "useraccount.h"
#include "ui_useraccount.h"



UserAccount::UserAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAccount)
{
    ui->setupUi(this);
}

UserAccount::~UserAccount()
{
    delete ui;
}



void UserAccount::on_commandLinkButton_clicked()
{
    regist = new registration();
    hide();
    regist->show();
}
