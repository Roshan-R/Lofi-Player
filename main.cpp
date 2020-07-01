#include "lofi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lofi w;
    w.show();
    return a.exec();
}
