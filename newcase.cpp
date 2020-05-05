#include "newcase.h"
#include "ui_newcase.h"
#include "mytimeedit.h"

Newcase::Newcase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Newcase)
{
    ui->setupUi(this);
}

Newcase::~Newcase()
{
    delete ui;
    //MyTimeEdit time_begin;
}

void Newcase::setTime(int t)
{   int h;
    int m;
    if (t!=0)
    {
     h=8+t/ 2;
     m=(t %2)*30;
    }
   else
    {
      h=8;
      m=0;
    }
    QTime bt (h,m);
    ui->time_begin->setTime(bt);
    ui->time_begin->setEnabled(0);
}

QString  Newcase::getTitle ()
{
    return title;
}


void Newcase::on_Ok_clicked()
{
    title=ui->label_title->text();
}
