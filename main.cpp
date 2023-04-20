//gotocell.ui可以看成是一个ui容器文件，里面组织了某个ui对象树的所有孩子widgets对象。
//gotocell.ui文件被uic编译后，会生成的普通桥梁类Ui::bridge：

#include <QApplication>
#include <QDialog>
#include "ui_gotocell.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ui::bridge uib;         //gotocell.ui文件中顶层widget对象的objectName被作为
                            //uic编译生成的桥梁类类名；桥梁类对象uib用来调用setupUi()方法，

    QDialog gotocelldialog;       //创建一个QDialog的gotocelldialog对象
    uib.setupUi(&gotocelldialog); //调用setupUi()创建对话框的子部件及其布局管理器对象
                                  //并且将gotocelldialog对象指定为它们的父对象

    gotocelldialog.show();        //gotocelldialog是整个对话框对象树的父对象，调用show()会显示整个对象树

    return a.exec();
}


