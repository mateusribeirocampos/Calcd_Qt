#include "calcd.h"
#include "./ui_calcd.h"
#include "ui_calcd.h"

Calcd::Calcd(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calcd)
{
    ui->setupUi(this);
}

Calcd::~Calcd()
{
    delete ui;
}


void Calcd::on_B1_clicked()
{
    ui->LCDnumber->display(1);

}

void Calcd::on_B2_clicked()
{
    ui->LCDnumber->display(2);
}



void Calcd::on_B7_clicked()
{
    ui->LCDnumber->display(7);
}



