#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <cstdlib>
#include <iostream>

class Elemento
{
public:
    Elemento();
    Elemento(int _x, int _y);
    Elemento *getSiguiente();

    int x;
    int y;
    Elemento *sig;

};

#endif // ELEMENTO_H
