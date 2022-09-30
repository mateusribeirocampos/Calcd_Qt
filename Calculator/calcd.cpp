#include "calcd.h"
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

void Calcd::B0_clicked()
{
    ui->LCDnumber->display(0);
}

void Calcd::B1_clicked()
{
    ui->LCDnumber->display(1);
}

void Calcd::B2_clicked()
{
    ui->LCDnumber->display(2);
}

void Calcd::B3_clicked()
{
    ui->LCDnumber->display(3);
}

void Calcd::B4_clicked()
{
    ui->LCDnumber->display(4);
}

void Calcd::B5_clicked()
{
    ui->LCDnumber->display(5);
}

void Calcd::B6_clicked()
{
    ui->LCDnumber->display(6);
}

void Calcd::B7_clicked()
{
    ui->LCDnumber->display(7);
}

void Calcd::B8_clicked()
{
    ui->LCDnumber->display(8);
}

void Calcd::B9_clicked()
{
    ui->LCDnumber->display(9);
}

void Calcd::Bdot_clicked()
{
    ui->LCDnumber->display(".");
}

void Calcd::Bcomma_clicked()
{
    ui->LCDnumber->display(",");
}

void Calcd::Bplus_clicked()
{
    ui->LCDnumber->display("+");
}

void Calcd::Bminus_clicked()
{
    ui->LCDnumber->display("-");
}

void Calcd::Bmultiple_clicked()
{
    ui->LCDnumber->display("*");
}

void Calcd::Bdivide_clicked()
{
    ui->LCDnumber->display("/");
}

