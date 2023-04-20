//2021051615172 傅佳乐
//2023.3.7
#include "finddialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindDialog *dialog = new FindDialog;
    dialog->show();
    return a.exec();
}
