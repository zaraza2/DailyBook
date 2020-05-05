#ifndef DAY_H
#define DAY_H

#include <QMainWindow>

namespace Ui {
class Day;
}

class Day : public QMainWindow
{
    Q_OBJECT

public:
    int r,c;
    explicit Day(QWidget *parent = nullptr);
    ~Day();

private slots:
    void on_pushButton_3_clicked();

    void on_create_clicked();

    void on_list_case_cellClicked(int row, int column);

private:
    Ui::Day *ui;
};

#endif // DAY_H
