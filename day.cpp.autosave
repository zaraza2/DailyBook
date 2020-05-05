#include "day.h"
#include "ui_day.h"
#include "newcase.h"

Day::Day(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Day)
{
    ui->setupUi(this);

}

Day::~Day()
{
    delete ui;

}
 Newcase *ncase= new Newcase;
void Day::on_create_clicked()
{
   ncase->setTime(r);
   ncase->show();
   ui->label->setText(ncase->getTitle());
}

void Day::on_list_case_cellClicked(int row, int column)
{
    r=row;
    c=column;
    QTableWidgetItem *it = new QTableWidgetItem(ncase->getTitle());
    ui->list_case->setItem(r,0,it);
}
