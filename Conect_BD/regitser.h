#ifndef REGITSER_H
#define REGITSER_H

#include <QDialog>

namespace Ui {
class regitser;
}

class regitser : public QDialog
{
    Q_OBJECT

public:
    explicit regitser(QWidget *parent = nullptr);
    ~regitser();

private slots:
    //void on_pushButton_clicked();

    void on_SignUp_clicked();

    void on_username_returnPressed();

    void on_password_returnPressed();



    void on_isAdmin_stateChanged(int arg1);

private:
    Ui::regitser *ui;
};

#endif // REGITSER_H
