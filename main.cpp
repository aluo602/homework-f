//2021051615172 傅佳乐
//2023.04.19

#include <QApplication>
#include <QDialog>
#include <ui_finddialog.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ui::bridge uib;

    QDialog finddialog;

    uib.setupUi(&finddialog);

    finddialog.show();

    return a.exec();
}
