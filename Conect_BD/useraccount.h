#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <QDialog>
#include "registration.h"


namespace Ui {
class UserAccount;
}

class UserAccount : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccount(QWidget *parent = nullptr);
    ~UserAccount();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::UserAccount *ui;
    registration *regist;

};

#endif // USERACCOUNT_H
