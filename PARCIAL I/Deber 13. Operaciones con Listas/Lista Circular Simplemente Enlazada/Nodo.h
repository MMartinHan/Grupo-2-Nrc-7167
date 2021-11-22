#pragma once
#include <iostream>
class Nodo {
    private:
        int dato;
        Nodo *siguiente;
    public:
        Nodo(int dato, Nodo *sig){
            this->dato = dato;
            this->siguiente = sig;
        }
        void setSiguiente(Nodo *sig){
            this->siguiente = sig;
        }
        Nodo *getSiguiente(){
            return this->siguiente;
        }
        int getDato(){
            return this->dato;
        }

        friend class ListaSimple;
};
