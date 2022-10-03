#ifndef CALCD_H
#define CALCD_H

#include <QMainWindow>

using namespace std; // namespace std;

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
    void B0_clicked();

    void B1_clicked();

    void B2_clicked();

    void B3_clicked();

    void B4_clicked();

    void B5_clicked();

    void B6_clicked();

    void B7_clicked();

    void B8_clicked();

    void B9_clicked();

    void Bdot_clicked();

    void Bcomma_clicked();

    void Bplus_clicked();

    void Bminus_clicked();

    void Bmultiple_clicked();

    void Bdivide_clicked();



private:
    Ui::Calcd *ui;
};
#endif // CALCD_H
