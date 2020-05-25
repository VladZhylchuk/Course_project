#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QtSql>
#include<QMessageBox>
#include <QSqlQuery>
#include<QDebug>
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

//    QSqlDatabase db;
//    QSqlQuery query;
    QMessageBox *mes;
private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;


};

#endif // LOGIN_H
