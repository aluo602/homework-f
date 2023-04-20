//2021051615172fujiale
//2023.04.16

#include <QLabel>
#include <QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window;
    window.setGeometry(400, 300, 100, 90);

    auto label = new QLabel{"Hello Qt", &window};
    label->setAlignment(Qt::AlignCenter);
    label->setGeometry(10, 10, 80, 30);

    auto button = new QPushButton("Exit", &window);
    button->setGeometry(10, 50, 80, 30);
    
    QObject::connect(button, &QPushButton::clicked, &a, &QApplication::quit);

    window.show();

    return a.exec();
}
