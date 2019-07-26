#ifndef BOLSA_H
#define BOLSA_H
#include "elemento.h"

class Bolsa
{
public:
    Bolsa();
    Elemento *inicio;

    bool vacia();
    void insertar(int x, int y);
    int contar(int n);


};

#endif // BOLSA_H
