#ifndef ABOUT_PROGRAM_H
#define ABOUT_PROGRAM_H

#include <QDialog>

namespace Ui {
class About_Program;
}

class About_Program : public QDialog
{
    Q_OBJECT

public:
    explicit About_Program(QWidget *parent = nullptr);
    ~About_Program();

private:
    Ui::About_Program *ui;
};

#endif // ABOUT_PROGRAM_H
