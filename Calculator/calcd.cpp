#include "calcd.h"
#include "ui_calcd.h"
using namespace std;

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
    ui->LCDnumber->display('+');
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

//Variable
double valor1 = 0;
double valor2 = 0;
double valor3 = 0;
double valor4 = 0;
double valor5 = 0;
double valor6 = 0;
double valor7 = 0;
double valor8 = 0;
double valor9 = 0;
double valor0 = 0;
int contador_Decimal = 0;
bool somar = 0;
bool subtratir = 0;
bool multiplicar = 0;
bool dividir = 0;

void Calcd::B0_clicked()
{
    if (contador_Decimal == 0)
    {
        if (somar == 0 && subtratir == 0)
        {
            valor1 = valor1*10+1;
            ui->LCDnumber->display(valor1);
        }
        else
        {
            valor2 = valor2*10+1;
            ui->LCDnumber->display(valor2);
        }
        if(somar == 0 && subtratir == 0){
            valor1 = valor1 + 1/contador_Decimal;
            ui->LCDnumber->display(valor1);
            contador_Decimal = contador_Decimal*10;
        }
    }
}

