#include "blackboardwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BlackboardWindow w;
    w.show();

    return a.exec();
}
