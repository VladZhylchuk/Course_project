#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <QDialog>
#include "mainwindow.h"


namespace Ui {
class UserAccount;
}

class UserAccount : public QDialog
{
    Q_OBJECT
    QStringList *list = new QStringList();
public:
    explicit UserAccount(QWidget *parent = nullptr);
    ~UserAccount();

private slots:

    void on_Add_Film_clicked();

    void on_tabWidget_tabBarClicked(int index);
    void Show_all();

    void on_Film_delete_clicked();

    void on_comboBox_2_activated(const QString &arg1);
    void Sort_by_Year();
    void Sort_by_duration();
    void Sort_by_budget();
    void Sort_by_title();
    void refresh_list();

    void on_search_textChanged(const QString &arg1);



    void on_listWidget_2_itemClicked();

private:
    Ui::UserAccount *ui;
    };

#endif // USERACCOUNT_H
