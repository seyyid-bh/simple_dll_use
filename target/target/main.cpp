#include <QCoreApplication>
#include <QtDebug>
#include "baddll.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Hi,Im from exe file :)";

    BadDLL mytarget;
    mytarget.devil_fun();

    return a.exec();
}
