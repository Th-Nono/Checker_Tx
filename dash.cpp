#include "dash.h"
#include "billin.h"
#include "ui_dash.h"
#include <QtWidgets>

Dash::Dash(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dash)
{
    ui->setupUi(this);
}

Dash::~Dash()
{
    delete ui;
}

void Dash::on_actionBill_In_triggered()
{
    QMessageBox::information(this,"test", "click");
}
