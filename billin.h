#ifndef BILLIN_H
#define BILLIN_H

#include <QDialog>

namespace Ui {
class Billin;
}

class Billin : public QDialog
{
    Q_OBJECT

public:
    explicit Billin(QWidget *parent = 0);
    ~Billin();

private:
    Ui::Billin *ui;
};

#endif // BILLIN_H
