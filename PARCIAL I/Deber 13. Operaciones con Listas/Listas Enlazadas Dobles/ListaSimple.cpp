#include <iostream>
#include "ListaSimple.h"

using namespace std;

ListaSimple::ListaSimple(){
    this->primero=NULL;
    this->_actual=NULL;
}

bool ListaSimple::listaVacia(){
    return (primero==NULL);
}

Nodo *ListaSimple::getPrimero(){
    return primero;
}

void ListaSimple::setPrimero(Nodo *pri){
    primero=pri;
}

Nodo *ListaSimple::getActual(){
    return _actual;
}

void ListaSimple::setActual(Nodo *act){
    _actual=act;
}

int ListaSimple::getDimLista(){
    return dimLista;
}

void ListaSimple::setDimLista(int dim){
    dimLista=dim;
}

void ListaSimple::insertar(int dato){
    Nodo *nuevo = new Nodo(dato,primero);
    if(ListaSimple::listaVacia()){
        primero = nuevo;
    }
    else{
        _actual->setSiguiente(nuevo);
    }
    _actual = nuevo;
    dimLista++;
}

void ListaSimple::mostrar(){
    Nodo *aux = primero;
    int indice = 0;
    mostrarRecursivo(aux,indice);
}

void ListaSimple::mostrarRecursivo(Nodo *valor,int indice){
    valor = obtenerNodo(indice);
    cout<<"Indce: "<<indice++<<" Valor: "<<valor->getDato()<<endl;
    if(indice < dimLista){
        mostrarRecursivo(valor->getSiguiente(),indice++);
    }
}

void ListaSimple::eliminar(int indice){
    Nodo *actual=obtenerNodo(indice-1);
    Nodo *aux = obtenerNodo(indice+1);
    actual->setSiguiente(aux);
    dimLista--;
}

Nodo *ListaSimple::obtenerNodo(int indices){
    int cont=0;
    Nodo *aux = primero;
    while(aux->getSiguiente()!=nullptr){
        if(cont == indices){
            break;
        }
        cont++;
        aux = aux->getSiguiente();
    }
    return aux;
}

void ListaSimple::insertarEn(int indice, int dato){
    Nodo *nuevo = new Nodo(dato,primero);
    Nodo *actual = obtenerNodo(indice-1);
    Nodo *aux = actual->getSiguiente();
    actual->setSiguiente(nuevo);
    actual=actual->getSiguiente();
    actual->setSiguiente(aux);
    dimLista++;
}