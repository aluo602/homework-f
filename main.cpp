//2021051615172fujiale
//2023.04.16

#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include "button.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window;
    window.setGeometry(400, 300, 100, 90);

    auto label = new QLabel{"Hello Qt", &window};
    label->setAlignment(Qt::AlignCenter);
    label->setGeometry(10, 10, 80, 30);

    Button button = new Button(&window);

    window.show();

    return a.exec();
}
