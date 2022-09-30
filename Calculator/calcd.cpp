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

void Calcd::on_B0_clicked()
{
    ui->LCDnumber->display(0);
}

void Calcd::on_B1_clicked()
{
    ui->LCDnumber->display(1);
}

void Calcd::on_B2_clicked()
{
    ui->LCDnumber->display(2);
}

void Calcd::on_B3_clicked()
{
    ui->LCDnumber->display(3);
}

void Calcd::on_B4_clicked()
{
    ui->LCDnumber->display(4);
}

void Calcd::on_B5_clicked()
{
    ui->LCDnumber->display(5);
}

void Calcd::on_B6_clicked()
{
    ui->LCDnumber->display(6);
}

void Calcd::on_B7_clicked()
{
    ui->LCDnumber->display(7);
}

void Calcd::on_B8_clicked()
{
    ui->LCDnumber->display(8);
}

void Calcd::on_B9_clicked()
{
    ui->LCDnumber->display(9);
}

void Calcd::on_Bdot_clicked()
{
    ui->LCDnumber->display(".");
}

void Calcd::on_Bcomma_clicked()
{
    ui->LCDnumber->display(",");
}


void Calcd::on_LCDnumber_overflow()
{
    ui->LCDnumber->overflow();
}

