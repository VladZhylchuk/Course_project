/********************************************************************************
** Form generated from reading UI file 'useraccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNT_H
#define UI_USERACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserAccount
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Add_Film;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *genre;
    QLineEdit *director;
    QLineEdit *coutntry;
    QLineEdit *film_awards;
    QFrame *line;
    QFrame *line_3;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *title;
    QLineEdit *duration;
    QLineEdit *year;
    QLineEdit *budget;
    QLabel *label_2;
    QTextEdit *expression;
    QWidget *tab_2;
    QPushButton *Delete;

    void setupUi(QDialog *UserAccount)
    {
        if (UserAccount->objectName().isEmpty())
            UserAccount->setObjectName(QString::fromUtf8("UserAccount"));
        UserAccount->resize(800, 400);
        UserAccount->setMaximumSize(QSize(800, 400));
        tabWidget = new QTabWidget(UserAccount);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 800, 400));
        tabWidget->setMinimumSize(QSize(800, 400));
        tabWidget->setMaximumSize(QSize(791, 391));
        tabWidget->setStyleSheet(QString::fromUtf8("backround-color : #D3D3D3;"));
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Add_Film = new QPushButton(tab);
        Add_Film->setObjectName(QString::fromUtf8("Add_Film"));
        Add_Film->setGeometry(QRect(190, 290, 91, 31));
        QFont font;
        font.setPointSize(12);
        Add_Film->setFont(font);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 90, 192, 110));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setPointSize(10);
        label_13->setFont(font1);

        verticalLayout_4->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        verticalLayout_4->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        verticalLayout_4->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_4->addWidget(label_16);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        genre = new QLineEdit(layoutWidget);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setEnabled(true);
        genre->setFont(font1);

        verticalLayout_5->addWidget(genre);

        director = new QLineEdit(layoutWidget);
        director->setObjectName(QString::fromUtf8("director"));
        director->setEnabled(true);
        director->setFont(font1);

        verticalLayout_5->addWidget(director);

        coutntry = new QLineEdit(layoutWidget);
        coutntry->setObjectName(QString::fromUtf8("coutntry"));
        coutntry->setEnabled(true);
        coutntry->setFont(font1);

        verticalLayout_5->addWidget(coutntry);

        film_awards = new QLineEdit(layoutWidget);
        film_awards->setObjectName(QString::fromUtf8("film_awards"));
        film_awards->setEnabled(true);

        verticalLayout_5->addWidget(film_awards);


        horizontalLayout_2->addLayout(verticalLayout_5);

        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 50, 781, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(240, 70, 20, 171));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 101, 31));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 90, 198, 110));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        verticalLayout->addWidget(label_12);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        title = new QLineEdit(layoutWidget_2);
        title->setObjectName(QString::fromUtf8("title"));
        title->setEnabled(true);
        title->setFont(font1);

        verticalLayout_3->addWidget(title);

        duration = new QLineEdit(layoutWidget_2);
        duration->setObjectName(QString::fromUtf8("duration"));
        duration->setEnabled(true);
        duration->setFont(font1);

        verticalLayout_3->addWidget(duration);

        year = new QLineEdit(layoutWidget_2);
        year->setObjectName(QString::fromUtf8("year"));
        year->setEnabled(true);
        year->setFont(font1);

        verticalLayout_3->addWidget(year);

        budget = new QLineEdit(layoutWidget_2);
        budget->setObjectName(QString::fromUtf8("budget"));
        budget->setEnabled(true);
        budget->setFont(font1);

        verticalLayout_3->addWidget(budget);


        horizontalLayout_3->addLayout(verticalLayout_3);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 70, 81, 21));
        label_2->setFont(font);
        expression = new QTextEdit(tab);
        expression->setObjectName(QString::fromUtf8("expression"));
        expression->setGeometry(QRect(520, 90, 171, 131));
        expression->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        Delete = new QPushButton(tab_2);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(0, 330, 91, 31));
        Delete->setFont(font);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(UserAccount);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserAccount);
    } // setupUi

    void retranslateUi(QDialog *UserAccount)
    {
        UserAccount->setWindowTitle(QCoreApplication::translate("UserAccount", "Dialog", nullptr));
        Add_Film->setText(QCoreApplication::translate("UserAccount", "Add film", nullptr));
        label_13->setText(QCoreApplication::translate("UserAccount", "genre", nullptr));
        label_14->setText(QCoreApplication::translate("UserAccount", "director", nullptr));
        label_15->setText(QCoreApplication::translate("UserAccount", "country", nullptr));
        label_16->setText(QCoreApplication::translate("UserAccount", "awards", nullptr));
        label->setText(QCoreApplication::translate("UserAccount", "Add film", nullptr));
        label_3->setText(QCoreApplication::translate("UserAccount", "Title", nullptr));
        label_4->setText(QCoreApplication::translate("UserAccount", "duration", nullptr));
        label_11->setText(QCoreApplication::translate("UserAccount", "year", nullptr));
        label_12->setText(QCoreApplication::translate("UserAccount", "budget mln$", nullptr));
        label_2->setText(QCoreApplication::translate("UserAccount", "Expression", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("UserAccount", "Add Film", nullptr));
        Delete->setText(QCoreApplication::translate("UserAccount", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("UserAccount", "Show all films", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAccount: public Ui_UserAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNT_H
