#include "calcd.h"
#include "ui_calcd.h"

double calVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool ClearTrigger = false;


//contructor
Calcd::Calcd(QWidget *parent)

//Chama o construtor QMainWindow
    : QMainWindow(parent)

    //Cria a classe UI e assina ele para o membro ui
    , ui(new Ui::Calcd)

{//configura o UI
    ui->setupUi(this);

    //coloca o 0.0 no display
    ui->Display->setText(QString::number(calVal));

    //vai segurar as referencias de todos os membros do botões
    QPushButton *numButtons[10];

    //Ciclo através da locação de butões
    for(int i = 0; i < 10; ++i){
        QString butName = "Button" + QString::number(i);

        //pega os botões por número e adiciona no array numButtons[i]
        numButtons[i] = Calcd::findChild<QPushButton*>(butName);

        //quando o botão é liberado chama num_pressed()
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }
    //Conexão dos sinais e slots para parear com os botões
    connect(ui->Sum, SIGNAL(clicked()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(clicked()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(clicked()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiple, SIGNAL(clicked()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Equals, SIGNAL(clicked()), this,
            SLOT(EqualButtonPressed()));
    connect(ui->Clear, SIGNAL(clicked()), this,
            SLOT(ClearButton()));
    connect(ui->Dot, SIGNAL(clicked()), this,
            SLOT(DotPress()));
}
//destructor
Calcd::~Calcd()
{
    delete ui;
}

void Calcd::NumPressed(){
    //envia retorno para o ponteiro do botão pressionado
    QPushButton *button = (QPushButton *)sender();

    //pega o numero do botão
    QString butVal = button->text();

    //pega o valor do display
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0)){

        //calVal = butVal.toDouble
        ui->Display->setText(butVal);
    }else{
        //Coloca o novo numero para o lugar certo
        QString newVal = displayVal + butVal;

        //versão dobrada do número
        double dbNewVal = newVal.toDouble();

        //calVal = newVal.toDouble();
        //configura valor no display e permite mais de 16 caracteres
        //digitos antes usando exponencial
        ui->Display->setText(QString::number(dbNewVal, 'g', 5));
    }
}

void Calcd::MathButtonPressed(){
    //cancela os botões previamente clicados
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    //armazena os valores atuais no display
    QString displayVal = ui->Display->text();
    calVal = displayVal.toDouble();

    //envia (sender) retorno ao ponteiro do botão pressionado
    QPushButton *button = (QPushButton *)sender();

    //pega o símbolo do botão
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    }else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    }else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    }else {
        subTrigger = true;
    }
    //limpa o display
    ui->Display->setText("");
}

void Calcd::EqualButtonPressed(){
    //pega o novo calculo
    double solution = 0.0;

    //pega o valor no display
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    //assegura que o botão selecionado foi pressionado
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calVal + dblDisplayVal;
        }else if(subTrigger){
            solution = calVal - dblDisplayVal;
        }else if(multTrigger){
            solution = calVal * dblDisplayVal;
        }else {
            solution = calVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void Calcd::ClearButton(){
    ui->Display->setText("0");
}

void Calcd::DotPress(){
    // pega o valor atual do display
    QString displayVal = ui->Display->text();

    // verifica se o ponto já foi adicionado
    if(!displayVal.contains(".")) {

        // adiciona o ponto ao final do valor atual do display
        ui->Display->setText(displayVal+".");
    }
}
