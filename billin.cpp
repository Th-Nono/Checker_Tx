#include "billin.h"
#include "ui_billin.h"

Billin::Billin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Billin)
{
    ui->setupUi(this);
}

Billin::~Billin()
{
    delete ui;
}
