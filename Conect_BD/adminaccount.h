#ifndef ADMINACCOUNT_H
#define ADMINACCOUNT_H
#include "QDebug"
#include <QDialog>
#include <QSqlQuery>


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


    void on_Add_Film_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_Delete_clicked();

    void on_comboBox_activated();
    void Sort_by_Year();
    void Sort_by_duration();
    void Sort_by_budget();
    void Sort_by_title();
    void Show_all();
    void on_Delete_2_clicked();

    void on_Delete_3_clicked();

private:
    Ui::AdminAccount *ui;
    };

#endif // ADMINACCOUNT_H
