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


