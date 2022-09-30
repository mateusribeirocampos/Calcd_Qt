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


private slots:
    void on_B0_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

    void on_B3_clicked();

    void on_B4_clicked();

    void on_B5_clicked();

    void on_B6_clicked();

    void on_B7_clicked();

    void on_B8_clicked();

    void on_B9_clicked();

    void on_Bdot_clicked();

    void on_Bcomma_clicked();

    void on_Bplus_clicked();

    void on_Bminus_clicked();

    void on_Bmultiple_clicked();

    void on_Bdivide_clicked();

private:
    Ui::Calcd *ui;
};
#endif // CALCD_H
