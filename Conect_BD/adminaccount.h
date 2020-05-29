#ifndef ADMINACCOUNT_H
#define ADMINACCOUNT_H

#include <QDialog>

namespace Ui {
class AdminAccount;
}

class AdminAccount : public QDialog
{
    Q_OBJECT

public:
    explicit AdminAccount(QWidget *parent = nullptr);
    ~AdminAccount();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdminAccount *ui;
};

#endif // ADMINACCOUNT_H
