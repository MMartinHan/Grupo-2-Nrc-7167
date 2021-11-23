#include "ListaCircularDoble.h"
ListaCircularDoble::ListaCircularDoble()
{
primero = NULL;
}
void ListaCircularDoble::insertar(int dato){
Nodo *nuevo= new Nodo(dato);
if(primero == NULL){
primero = nuevo;
primero->setSiguiente(primero);
primero->setAnterior(primero);
}else if(primero->getSiguiente() == primero){
ultimo = nuevo;
ultimo->setSiguiente(primero);
ultimo->setAnterior(primero);
primero->setSiguiente(ultimo);
primero->setAnterior(ultimo);
}else{
ultimo->setSiguiente(nuevo);
nuevo->setAnterior(ultimo);
nuevo->setSiguiente(primero);
primero->setAnterior(nuevo);
ultimo = nuevo;
}
}
bool ListaCircularDoble::eliminar(int dato){
if(primero == NULL){
return false;
}else if(primero->getSiguiente() == primero && primero->getDato() == dato){
primero = NULL;
return true;
}else{
Nodo *auxiliar = primero;
while(auxiliar->getSiguiente() != primero && auxiliar->getDato() != dato){
auxiliar = auxiliar->getSiguiente();
}
if(auxiliar == primero && auxiliar->getDato() == dato){
primero->getSiguiente()->setAnterior(primero->getAnterior());
primero->getAnterior()->setSiguiente(primero->getSiguiente());
primero = primero->getSiguiente();
delete auxiliar;
return true;
}else if(auxiliar->getDato() == dato){
auxiliar->getAnterior()->setSiguiente(auxiliar->getSiguiente());
auxiliar->getSiguiente()->setAnterior(auxiliar->getAnterior());
delete auxiliar;
return true;
}else{
return false;
}
}
std::cout << "Fin";
}
void ListaCircularDoble::imprimir(){
if(primero == NULL){
std::cout << "La lista esta vacia";
return;
}
Nodo *auxiliar = primero;
std::cout << auxiliar->getDato() << "-->";
while(auxiliar->getSiguiente() != primero){
auxiliar = auxiliar->getSiguiente();
std::cout << auxiliar->getDato() << "-->";
}
}