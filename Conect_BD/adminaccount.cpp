#include "adminaccount.h"
#include "ui_adminaccount.h"

AdminAccount::AdminAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAccount)
{
    ui->setupUi(this);
}

AdminAccount::~AdminAccount()
{
    delete ui;
}

void AdminAccount::on_pushButton_clicked()
{

}
