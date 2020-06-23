#include "adminaccount.h"
#include "ui_adminaccount.h"
#include"mainwindow.h"
#include "iomanip"

AdminAccount::AdminAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAccount)
{
    ui->setupUi(this);

    ui->comboBox->addItem("year");
    ui->comboBox->addItem("duration");
    ui->comboBox->addItem("budget");
    ui->comboBox->addItem("name");




}

AdminAccount::~AdminAccount()
{
    delete ui;
}



void AdminAccount::on_Add_Film_clicked()
{
    QString Film_title = ui->title->text();
    QString Film_genre = ui->genre->text();
    int Film_duration = ui->duration->text().toInt();
    int Film_year = ui->year->text().toInt();
    int Film_budget = ui->budget->text().toInt();
   // QString expression = ui->expression->toPlainText();
    ui->Error->clear();


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
                                 "([title],[duraiton],[budget],[year])"
                                 "VALUES(:title, :duraiton, :budget, :year)";
        QSqlQuery add_film_query;

        add_film_query.prepare(add_film_info);



        if(Film_title != nullptr && Film_budget != 0 && Film_duration != 0)
        {
            add_film_query.bindValue(":title",Film_title);
            add_film_query.bindValue(":duraiton",Film_duration);
            add_film_query.bindValue(":budget",Film_budget);
            add_film_query.bindValue(":year",Film_year);
           // add_film_query.bindValue(":Expression",expression);
            film_exist = true;
            ui->Error->setText("Film added");
        }
        if(!add_film_query.exec())
        {
           ui->Error->setText("Enter more info about film");
        }
    }
    else
    {
        ui->Error->setText("This film already exist");
    }
}

void AdminAccount::on_tabWidget_tabBarClicked(int index)
{
    Show_all();
    ui->title->setText("");
    ui->year->setText("");
    ui->budget->setText("");
    ui->duration->setText("");
    ui->Error->clear();

 }

void AdminAccount::on_Delete_clicked()
{


    if(ui->listWidget->currentItem() != nullptr )
    {
        QSqlQuery Delete_Film;
        Delete_Film.prepare("{CALL Delete_Film(:title)}");

        QString title = ui->listWidget->currentItem()->text();

        Delete_Film.bindValue(":title", title);
        Delete_Film.exec();

      //qDebug()<< ui->listWidget->currentItem()->text();
    }
      Show_all();
}
void AdminAccount::Show_all()
{
    QString  add_film_info = "SELECT title FROM Films";
    QSqlQuery add_film_query;
    add_film_query.prepare(add_film_info);

    add_film_query.exec();

    QString title = add_film_query.record().value(1).toString();
    ui->listWidget->clear();
    while(add_film_query.next())
    {
       QString title = add_film_query.record().value(0).toString();
       ui->listWidget->addItem(title);
    }
}
void AdminAccount::on_comboBox_activated()
{
    if(ui->comboBox->currentText() != "name")
    {
        ui->Delete->setEnabled(false);
    }
    else
    {
        ui->Delete->setEnabled(true);
    }
    int index = ui->comboBox->currentIndex();
    ui->listWidget->clear();
    switch(index)
    {
        case 0:
        Sort_by_Year();
        break;
        case 1:
        Sort_by_duration();
        break;
        case 2:
        Sort_by_budget();
        break;
        case 3:
        Sort_by_title();
        break;

    }





    //ui->comboBox->clear()
}

void AdminAccount::Sort_by_Year()
{
        ui->listWidget->clear();
        QString film_sort_query = "Film_Year_Sort";
        QSqlQuery Sort_Film_by_Year;
        Sort_Film_by_Year.prepare(film_sort_query);
        Sort_Film_by_Year.exec();


        while (Sort_Film_by_Year.next())
         {
                  QString title = Sort_Film_by_Year.record().value(0).toString();
                  QString year = Sort_Film_by_Year.record().value(1).toString();
                  ui->listWidget->addItem(title + "   " + year);
          }

}
void AdminAccount::Sort_by_duration()
{

        QString film_sort_query = "Film_Duration_Sort";
        QSqlQuery Sort_by_duration;
        Sort_by_duration.prepare(film_sort_query);
        Sort_by_duration.exec();

        while (Sort_by_duration.next())
         {
                  QString title = Sort_by_duration.record().value(0).toString();
                  QString duration= Sort_by_duration.record().value(1).toString();
                  ui->listWidget->addItem(title  + duration);
        }

}
void AdminAccount::Sort_by_budget()
{

        QString film_sort_query = "Film_Budget_Sort";
        QSqlQuery Sort_by_budget;
        Sort_by_budget.prepare(film_sort_query);
        Sort_by_budget.exec();

        while (Sort_by_budget.next())
         {
                  QString title = Sort_by_budget.record().value(0).toString();
                  QString budget = Sort_by_budget.record().value(1).toString();

                  ui->listWidget->addItem(title  + budget);

        }

}
void AdminAccount::Sort_by_title()
{

        QString film_sort_query = "Film_Title_Sort";
        QSqlQuery Sort_by_title;
        Sort_by_title.prepare(film_sort_query);
        Sort_by_title.exec();

        while (Sort_by_title.next())
         {
                  QString title = Sort_by_title.record().value(0).toString();
                  ui->listWidget->addItem(title );

        }

}



void AdminAccount::on_Delete_2_clicked()
{
    ui->title->setText("");
    ui->year->setText("");
    ui->budget->setText("");
    ui->duration->setText("");
}

void AdminAccount::on_Delete_3_clicked()
{

    MainWindow *main = new MainWindow();
    main->show();
    this->close();


}
