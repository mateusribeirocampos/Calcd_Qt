#ifndef CALCD_H
#define CALCD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calcd; }
QT_END_NAMESPACE

class Calcd : public QMainWindow
{
    Q_OBJECT

public:
    Calcd(QWidget *parent = nullptr);
    ~Calcd();


private:
    Ui::Calcd *ui;

private slots:
    void NumPressed();
    //void MathButtonPressed();
    //void EqualButton();
    //void ChangeNumberSign();
};
#endif // CALCD_H
