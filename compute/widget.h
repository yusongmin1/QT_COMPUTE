#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QtMath>
#include <QtDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QString input="";
    QString output="";
    int input_or_output=0;
    int mode=10;
    int output_mode=10;


private slots:
    void on_pushButton_23_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_28_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void show_output();
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
