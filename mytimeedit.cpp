#include "mytimeedit.h"

MyTimeEdit::MyTimeEdit(QWidget *parent) :  QTimeEdit(parent)
{
    // Формат вывода времени
            setDisplayFormat("HH:mm");

            // Диапазон данных между minimumDateTime и maximumDateTime
            setDateTimeRange(QDateTime(QDate(2000, 1, 1), QTime(0,0,0)),
                             QDateTime(QDate(2000, 1, 2), QTime(00,00,00)));
  }

