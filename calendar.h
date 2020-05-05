#ifndef CALENDAR_H
#define CALENDAR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calendar; }
QT_END_NAMESPACE

class Calendar : public QMainWindow
{
    Q_OBJECT
    int day;

public:
    Calendar(QWidget *parent = nullptr);
    ~Calendar();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::Calendar *ui;
};
#endif // CALENDAR_H
