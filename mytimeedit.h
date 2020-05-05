#ifndef MYTIMEEDIT_H
#define MYTIMEEDIT_H

#include <QWidget>
#include <QTimeEdit>

class MyTimeEdit : public QTimeEdit
{
    Q_OBJECT
public:
    explicit MyTimeEdit(QWidget *parent = nullptr);
    virtual void stepBy(int steps) {
           // Упрощенная реализация
           // При помощи кнопок можно изменять только секунды
           if( currentSection() != QDateTimeEdit::MinuteSection )
               return;

           // Если текущая секция это секунды, то шаг 5 секунд
           steps *= 30; // Умножить, потому что при движении вниз steps отрицательный

           // Если по-простому, то при подходе к верхней границе
           if( steps > 0 && sectionText(QDateTimeEdit::MinuteSection) == "30") {
               // добавляем 5 сек к текущему времени
               // тем самым перескакиваем через ограничение редактирования виджета
               QDateTime dt = dateTime().addSecs(1800);
               // если полученное значение больше верхней границы, то
               // устанавливаем его чуть ниже верхней границы, чтобы
               // не блокировалось движение вниз (почему и где оно блокируется? не знаю)
               if( dt >= maximumDateTime())
                   dt = maximumDateTime().addSecs(-60);
                   setTime(dt.time());
           }
           else if( steps < 0 && sectionText(QDateTimeEdit::MinuteSection) == "30" ) {
               // два этих else if это два хака для перехода через нижнюю границу
               // без блокировки
               QDateTime dt = dateTime().addSecs(-901);
               //if( dt <= minimumDateTime() )
                   dt = minimumDateTime();
               setTime(dt.time());
           }
           else if( steps < 0 && sectionText(QDateTimeEdit::MinuteSection) == "59" ) {
               QDateTime dt = dateTime().addSecs(time().msec() != 0? -899: -900);
              // if( dt <= minimumDateTime() )
                   dt = minimumDateTime();
               setTime(dt.time());
           }
           else {
               QTimeEdit::stepBy(steps);
           }
       }

signals:

};

#endif // MYTIMEEDIT_H
