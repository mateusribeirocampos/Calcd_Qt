#include "calcd.h"
#include "ui_calcd.h"

double calval = 0.0;
bool divTrigger = false;
bool multTigger = false;
bool addTrigger = false;
bool subTrigger = false;


Calcd::Calcd(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calcd)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calval));
    QPushButton*numButtons[10];
    for(int i = 0; i < 10; ++i){
        QString butName = "Button" + QString::number(i);
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
    QPushButton*button = (QPushButton * )sender();
    QString butval = button->text();
    QString displayval = ui->Display->text();
    if((displayval.toDouble()==0)||(displayval.toDouble()==0.0)){
        ui->Display->setText(butval);
    }else{
        QString newVal = displayval + butval;
        double dbNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dbNewVal, 'g', 16));

    }
}


