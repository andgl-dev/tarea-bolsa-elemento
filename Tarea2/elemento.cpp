#include "elemento.h"

Elemento::Elemento()
{

}

Elemento::Elemento(int _x, int _y)
{
    this->x=_x;
    this->y=_y;
    this->sig=NULL;
}

Elemento *Elemento::getSiguiente()
{
    return this->sig;
}
