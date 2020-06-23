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

QString removeSpaces3(QString word) {
    QString newWord;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != ' ') {
            newWord += word[i];
        }
    }

    return newWord;
}

void registration::on_Submit_clicked()
{
    qDebug()<<"Start";



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

        while(check_user_exists.next())
        {
            QString database_username = check_user_exists.record().value(1).toString();
            QString database_password = check_user_exists.record().value(2).toString();

            database_username = removeSpaces3(database_username);
            database_password = removeSpaces3(database_password);

            if(database_username == username )
            {
                if(database_password == password)
                {
                    bool isAdmin =  check_user_exists.record().value(3).toBool();
                    if(isAdmin)
                    {
                        hide();
                        show_message = false;
                          admin_account = new AdminAccount(this);
//                        admin_account.setModal(true);
//                        admin_account.exec();
                          admin_account->show();
                        break;
                    }
                    else
                    {
                        show_message = false;
                        this->hide();
                        user_account = new UserAccount(this);
//                        user_account->setModal(true);
//                        user_account->exec();
                        user_account->show();
                        break;
                    }
                }
                else
                {
                    QMessageBox::information(this,"","Wrong password");
                    show_message = false;
                    break;
                }

            }

        }
        if (show_message){QMessageBox::information(this,"","Wrong login");}
    }
    else
    {
        QMessageBox::warning(this,"","enter your login/password please");
        show_message = false;
    }
    qDebug()<<"Finally";
}

void registration::on_SignUp_clicked()
{
    regitser regist;
    regist.setModal(true);
    regist.exec();
}
