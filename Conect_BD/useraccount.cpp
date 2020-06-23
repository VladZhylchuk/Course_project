#include "useraccount.h"
#include "ui_useraccount.h"
#include "QRegExp"



UserAccount::UserAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAccount)
{
    ui->setupUi(this);
    ui->comboBox_2->addItem("name");
    ui->comboBox_2->addItem("year");
    ui->comboBox_2->addItem("duration");
    ui->comboBox_2->addItem("budget");

    ui->tab->setFocus();


}

UserAccount::~UserAccount()
{
    delete ui;
}





void UserAccount::on_Add_Film_clicked()
{
    QString Film_title = ui->title->text();
    QString Film_genre = ui->genre->text();
    int Film_duration = ui->duration->text().toInt();
    int Film_year = ui->year->text().toInt();
    int Film_budget = ui->budget->text().toInt();
    QString expression = ui->expression->toPlainText();
    ui->Status->clear();


    QSqlQuery film_exist_query;
    film_exist_query.setForwardOnly(true);
    film_exist_query.prepare("{CALL Film_exist(:title)}");

    bool film_exist = true;
    film_exist_query.bindValue(":title", Film_title);
    bool ok = film_exist_query.exec();


    if(film_exist_query.next())
    {
        film_exist = film_exist_query.last();
        qDebug()<< film_exist;
    }
    else
    {
        film_exist = film_exist_query.next();
        qDebug()<< film_exist;
    }


    if(!film_exist)
    {
        QString  add_film_info = "INSERT INTO [dbo].[Films]"
                                 "([title],[duraiton],[budget],[year],[Expression])"
                                 "VALUES(:title, :duraiton, :budget, :year, :Expression)";
        QSqlQuery add_film_query;

        add_film_query.prepare(add_film_info);



        if(Film_title != nullptr && Film_budget != 0 && Film_duration != 0)
        {
            add_film_query.bindValue(":title",Film_title);
            add_film_query.bindValue(":duraiton",Film_duration);
            add_film_query.bindValue(":budget",Film_budget);
            add_film_query.bindValue(":year",Film_year);
            add_film_query.bindValue(":Expression",expression);
            film_exist = true;
            ui->Status->setText("Film added");
        }
        if(!add_film_query.exec())
        {
           ui->Status->setText("Enter more info about film");
        }
    }
    else
    {
        ui->Status->setText("This film already exist");
    }

}
void UserAccount::Show_all()
{
    QString  add_film_info = "SELECT title FROM Films";
    QSqlQuery add_film_query;
    add_film_query.prepare(add_film_info);

    add_film_query.exec();

    QString title = add_film_query.record().value(1).toString();
    ui->listWidget_2->clear();
    while(add_film_query.next())
    {
       QString title = add_film_query.record().value(0).toString();
       ui->listWidget_2->addItem(title);
    }
}

void UserAccount::on_tabWidget_tabBarClicked(int index)
{
    Show_all();
    ui->title->setText("");
    ui->year->setText("");
    ui->budget->setText("");
    ui->duration->setText("");
    ui->Status->clear();
    refresh_list();
}


void UserAccount::on_Film_delete_clicked()
{
    if(ui->listWidget_2->currentItem() != nullptr )
    {
        QSqlQuery Delete_Film;
        Delete_Film.prepare("{CALL Delete_Film(:title)}");

        QString title = ui->listWidget_2->currentItem()->text();

        Delete_Film.bindValue(":title", title);
        Delete_Film.exec();

      //qDebug()<< ui->listWidget->currentItem()->text();
    }
      Show_all();
}

void UserAccount::on_comboBox_2_activated(const QString &arg1)

{
    if(ui->comboBox_2->currentText() != "name")
    {
        ui->Film_delete->setEnabled(false);
    }
    else
    {
        ui->Film_delete->setEnabled(true);
    }
    int index = ui->comboBox_2->currentIndex();
    ui->listWidget_2->clear();
    switch(index)
    {
        case 0:
        Sort_by_title();
        refresh_list();
        break;
        case 1:
        Sort_by_Year();
        refresh_list();
        break;
        case 2:
        Sort_by_duration();
        refresh_list();
        break;
        case 3:
        Sort_by_budget();
        refresh_list();
        break;

    }
    refresh_list();
}

void UserAccount::Sort_by_Year()
{
        ui->listWidget_2->clear();
        QString film_sort_query = "Film_Year_Sort";
        QSqlQuery Sort_Film_by_Year;
        Sort_Film_by_Year.prepare(film_sort_query);
        Sort_Film_by_Year.exec();


        while (Sort_Film_by_Year.next())
         {
                  QString title = Sort_Film_by_Year.record().value(0).toString();
                  QString year = Sort_Film_by_Year.record().value(1).toString();
                  ui->listWidget_2->addItem(title + "   " + year);
          }

}
void UserAccount::Sort_by_duration()
{

        QString film_sort_query = "Film_Duration_Sort";
        QSqlQuery Sort_by_duration;
        Sort_by_duration.prepare(film_sort_query);
        Sort_by_duration.exec();

        while (Sort_by_duration.next())
         {
                  QString title = Sort_by_duration.record().value(0).toString();
                  QString duration= Sort_by_duration.record().value(1).toString();
                  ui->listWidget_2->addItem(title  + duration);
        }

}
void UserAccount::Sort_by_budget()
{

        QString film_sort_query = "Film_Budget_Sort";
        QSqlQuery Sort_by_budget;
        Sort_by_budget.prepare(film_sort_query);
        Sort_by_budget.exec();

        while (Sort_by_budget.next())
         {
                  QString title = Sort_by_budget.record().value(0).toString();
                  QString budget = Sort_by_budget.record().value(1).toString();

                  ui->listWidget_2->addItem(title  + budget);

        }

}
void UserAccount::Sort_by_title()
{

        QString film_sort_query = "Film_Title_Sort";
        QSqlQuery Sort_by_title;
        Sort_by_title.prepare(film_sort_query);
        Sort_by_title.exec();

        while (Sort_by_title.next())
         {
                  QString title = Sort_by_title.record().value(0).toString();
                  ui->listWidget_2->addItem(title );

        }

}

void UserAccount::refresh_list()
{
    list->clear();
    for(int i = 0; i < ui->listWidget_2->count(); i++)
            list->append((ui->listWidget_2->item(i)->text()));

    }
void UserAccount::on_search_textChanged(const QString &arg1)
{
    QRegExp regExp(arg1, Qt::CaseSensitive, QRegExp::Wildcard);
    ui->listWidget_2->clear();
    ui->listWidget_2->addItems(list->filter(regExp));

}

void UserAccount::on_listWidget_2_itemClicked()
{
    QString get_expression_info = "{CALL Film_Expression(?)}";
    QSqlQuery get_expression;

    get_expression.prepare((get_expression_info));
    QString film_title = ui->listWidget_2->currentItem()->text();

    get_expression.bindValue(0,film_title);
    get_expression.exec();
    if(get_expression.next())
    {
        QString expression = get_expression.record().value(0).toString();
        ui->listWidget_3->clear();
        ui->listWidget_3->addItem(expression);
    }
    else
    {
        ui->listWidget_2->clear();
        ui->listWidget_3->addItem("No expression yet");
    }

}
