#include "calcd.h"
#include "ui_calcd.h"

double calVal = 0.0;
bool divTrigger = false;
bool multTigger = false;
bool addTrigger = false;
bool subTrigger = false;


Calcd::Calcd(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calcd)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calVal));
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i){
        QString butName = "Botton" + QString::number(i);
        numButtons[i] = Calcd::findChild<QPushButton*>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
        }
}

Calcd::~Calcd()
{
    delete ui;
}

void Calcd::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0)||(displayVal.toDouble() == 0.0)){
        ui->Display->setText(butVal);
    }else{
        QString newVal = displayVal + butVal;
        double dbNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dbNewVal, 'g', 16));

    }
}

void Calcd::MathButtonPressed(){
    divTrigger = false;
    multTigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    }else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTigger = true;
    }else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    }else {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calcd::EqualButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTigger || divTrigger){
        if(addTrigger){
            solution = calVal + dblDisplayVal;
        }else if(subTrigger){
            solution = calVal - dblDisplayVal;
        }else if(multTigger){
            solution = calVal * dblDisplayVal;
        }else {
            solution = calVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}



