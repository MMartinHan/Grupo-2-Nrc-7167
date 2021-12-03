#include "NodoDoble.h"

NodoDoble::NodoDoble(float num)
{
    this->num = num;
    this->ant = NULL;
    this->sig = NULL;
}

NodoDoble::~NodoDoble()
{
    //dtor
}
