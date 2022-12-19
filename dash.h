#ifndef DASH_H
#define DASH_H

#include <QMainWindow>

namespace Ui {
class Dash;
}

class Dash : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dash(QWidget *parent = 0);
    ~Dash();

private slots:
    void on_actionBill_In_triggered();

private:
    Ui::Dash *ui;
};

#endif // DASH_H
