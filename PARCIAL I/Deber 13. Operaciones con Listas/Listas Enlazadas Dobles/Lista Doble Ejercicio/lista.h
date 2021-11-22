#pragma once

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include "nodo.cpp"
using namespace std;

#define ASCENDENTE 1
#define DESCENDENTE 0

typedef nodo *pnodo;

class lista {
   public:
    lista() : plista(NULL) {}
    ~lista();

    void Insertar(int v);
    void Borrar(int v);
    bool ListaVacia() { return plista == NULL; }
    void Mostrar(int);
    void Siguiente();
    void Anterior();
    void Primero();
    void Ultimo();
    bool Actual() { return plista != NULL; }
    int ValorActual() { return plista->valor; }

   private:
    pnodo plista;
};