#include <QCoreApplication>
#include "bolsa.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Bolsa *b = new Bolsa();

    if(b->vacia())
    {
        std::cout <<"la bolsa esta vacia"<<std::endl;
    }
    else
    {
        std::cout <<"algun error deberia estar vacia la bolsa"<<std::endl;
    }

    b->insertar(0,0);
    b->insertar(1,1);
    b->insertar(2,2);
    b->insertar(3,3);
    b->insertar(4,4);
    b->insertar(5,5);

    if(b->vacia())
    {
        std::cout <<"esta vacia"<<std::endl;
    }
    else
    {
        std::cout <<"la bolsa tiene elementos"<<std::endl;
    }

    int cuantos = b->contar(2);
    std::cout <<"apartir del nodo 2 la bolsa tiene "<<cuantos<<" elementos mas"<<std::endl;

    return a.exec();
}
