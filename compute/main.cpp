#include "widget.h"

#include <QApplication>
#include <QLineEdit>
#include <QFont>
#include<QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("我的进制转换器");
    w.setWindowIcon(QIcon("./compute.png"));
    w.show();

    return a.exec();
}
