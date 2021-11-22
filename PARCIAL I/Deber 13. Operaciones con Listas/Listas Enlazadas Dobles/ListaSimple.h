#pragma once
#include <iostream>
#include "Nodo.h"

class ListaSimple {
    private:
        Nodo *primero;
        Nodo *_actual;
        int dimLista=0;
    public:
        ListaSimple();
        bool listaVacia();
        void insertar(int dato);
        void insertarEn(int indice, int dato);
        void eliminar(int indice);
        void mostrar();
        void mostrarRecursivo(Nodo *valor,int indice);
        Nodo *getPrimero();
        void setPrimero(Nodo *pri);
        Nodo *getActual();
        void setActual(Nodo *act);
        int getDimLista();
        void setDimLista(int dim);
        Nodo *obtenerNodo(int indice);

};