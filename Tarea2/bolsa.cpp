#include "bolsa.h"

Bolsa::Bolsa()
{

}

bool Bolsa::vacia()
{
    bool b = true;

    if(this->inicio==NULL)
    {
        b= true;
    }
    else
    {
        b= false;
    }
    return b;
}

void Bolsa::insertar(int x, int y)
{
    Elemento *nuevo = new Elemento(x,y);

    //vacia
    if(this->inicio==NULL)
    {
        this->inicio=nuevo;
        this->inicio->sig=this->inicio;
    }
    else if(this->inicio->sig==this->inicio)
    {
        nuevo->sig=this->inicio;
        this->inicio->sig=nuevo;
        this->inicio=nuevo;
    }
    else
    {
        Elemento *aux=this->inicio;
        do
        {
            aux=aux->sig;
        }
        while(aux->sig != this->inicio);
        nuevo->sig = this->inicio;
        aux->sig = nuevo;
        this->inicio=nuevo;
    }
}

int Bolsa::contar(int n)
{
    int contador=0;
    Elemento *temp = this->inicio;
    Elemento *temp2 = this->inicio;
    while (contador<n) {
        temp=temp->sig;
        contador++;
    }

    contador=0;
    while(temp != temp2)
    {
        contador++;
        temp=temp->sig;
    }

    return contador;
}





