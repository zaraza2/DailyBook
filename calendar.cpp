#include "calendar.h"
#include "ui_calendar.h"
#include "day.h"

Calendar::Calendar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calendar)
{
    ui->setupUi(this);

}

Calendar::~Calendar()
{
    delete ui;

}


void Calendar::on_calendarWidget_clicked(const QDate &date)
{
    Day *new_day= new Day();
    new_day->show();
}
