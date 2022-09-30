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
    void on_B1_clicked();

    void on_B7_clicked();

    void on_B2_clicked();

private:
    Ui::Calcd *ui;
};
#endif // CALCD_H
