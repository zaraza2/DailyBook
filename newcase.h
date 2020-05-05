#ifndef NEWCASE_H
#define NEWCASE_H

#include <QMainWindow>

namespace Ui {
class Newcase;
}

class Newcase : public QMainWindow
{
    Q_OBJECT

public:
    void setTime(int t);
    QString getTitle ();
    explicit Newcase(QWidget *parent = nullptr);
    ~Newcase();
    QString title;

private slots:

    void on_Ok_clicked();

private:
    Ui::Newcase *ui;
};

#endif // NEWCASE_H
