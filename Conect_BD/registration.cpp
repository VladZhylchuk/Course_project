#include "registration.h"
#include "ui_registration.h"

registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}

void registration::on_username_returnPressed()
{

}

void registration::on_password_returnPressed()
{

}

void registration::on_Submit_clicked()
{

}

void registration::on_SignUp_clicked()
{
    regitser regist;
    regist.setModal(true);
    regist.exec();
}
