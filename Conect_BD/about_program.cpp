#include "about_program.h"
#include "ui_about_program.h"

About_Program::About_Program(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_Program)
{
    ui->setupUi(this);
}

About_Program::~About_Program()
{
    delete ui;
}
