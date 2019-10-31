#include "login.h"
#include "interface.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //InterFace w;
    Login w;
    w.show();

    return a.exec();
}
