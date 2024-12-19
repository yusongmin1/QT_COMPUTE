#include "widget.h"
#include "ui_widget.h"
#include <QRegExpValidator>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QFont font;
    font.setFamily("仿宋");
    font.setPointSize(20);
    ui->lineEdit->setFont(font);
    ui->lineEdit_2->setFont(font);
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_2->setAttribute(Qt::WA_InputMethodEnabled, false);
    QRegExp regExp("^$"); // 只允许空字符串
    QValidator *validator = new QRegExpValidator(regExp, ui->lineEdit_2);
    ui->lineEdit_2->setValidator(validator);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::show_output()
{
    bool ok;
    QString str=input;
    int num=str.toInt(&ok,mode);
    //不管什么都转化成10进制，不过是将str按照什么进制来的进行转换
    qDebug()<<"输入数值转化成10进制"<<num<<"\n";
    output=QString::number(num,output_mode);
    output=output.toUpper();
    qDebug()<<"输出数值转化成"<<output_mode<<"进制数值"<<output<<"\n";
    ui->lineEdit->setText(output);
}
void Widget::on_pushButton_23_clicked()
{
    if(input_or_output==0)mode=2;//切换到二进制
    else
    {
        output_mode=2;
        show_output();
    }
    //printf("%d",2);

}

void Widget::on_pushButton_20_clicked()
{
    if(input_or_output==0)mode=8;//切换到八进制
    else
    {
        output_mode=8;
        show_output();
    }
}

void Widget::on_pushButton_21_clicked()
{
    if(input_or_output==0)mode=10;//切换到十进制
    else output_mode=10;
}

void Widget::on_pushButton_22_clicked()
{
    if(input_or_output==0)mode=16;//切换到十六进制
    else
    {
        output_mode=16;
        show_output();
    }
}

void Widget::on_pushButton_clicked()
{
    input+="1";//1号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_2_clicked()
{
    input+="2";//2号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_3_clicked()
{
    if(mode>2)input+="3";//3号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_4_clicked()
{
    if(mode>2)input+="4";//4号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_5_clicked()
{
    if(mode>2)input+="5";//5号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_6_clicked()
{
    if(mode>2)input+="6";//6号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_7_clicked()
{
    if(mode>2)input+="7";//7号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_8_clicked()
{
    if(mode>8)input+="8";//8号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_9_clicked()
{
    if(mode>8)input+="9";//9号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_10_clicked()
{

    input+="0";//10号
    ui->lineEdit_2->setText(input);
    show_output();
}



void Widget::on_pushButton_29_clicked()
{
    input_or_output=0;
}

void Widget::on_pushButton_30_clicked()
{
    input_or_output=1;
//    show_output();
}

void Widget::on_pushButton_11_clicked()
{
    if(mode==16)input+="A";//10号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_12_clicked()
{
    if(mode==16)input+="B";//11号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_25_clicked()
{
    if(mode==16)input+="C";//12号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_26_clicked()
{
    if(mode==16)input+="D";//13号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_24_clicked()
{
    if(mode==16)input+="E";//14号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_28_clicked()
{
    if(mode==16)input+="F";//15号
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_lineEdit_2_textChanged(const QString &arg1)
{
    input=arg1;
}

void Widget::on_pushButton_31_clicked()
{
    input.clear();
    ui->lineEdit_2->setText(input);
    show_output();
}

void Widget::on_pushButton_32_clicked()
{
    if(input.size()>=1)input.chop(1);
    ui->lineEdit_2->setText(input);
    show_output();
}
