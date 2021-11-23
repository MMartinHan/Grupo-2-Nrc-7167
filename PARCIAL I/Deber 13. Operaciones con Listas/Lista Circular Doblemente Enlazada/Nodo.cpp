#include "Nodo.h"
Nodo::Nodo(int _dato)
{
dato = _dato;
siguiente = NULL;
anterior = NULL;
}
int Nodo::getDato(){
return dato;
}
void Nodo::setDato(int _dato){
dato = _dato;
}
Nodo *Nodo::getSiguiente(){
return siguiente;
}
void Nodo::setSiguiente(Nodo *_siguiente){
siguiente = _siguiente;
}
Nodo *Nodo::getAnterior(){
return anterior;
}
void Nodo::setAnterior(Nodo *_anterior){
anterior = _anterior;
}