#pragma once

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

#define ASCENDENTE 1
#define DESCENDENTE 0

class nodo {
   public:
    nodo(int v, nodo *sig = NULL, nodo *ant = NULL) :
       valor(v), siguiente(sig), anterior(ant) {}

   private:
    int valor;
    nodo *siguiente;
    nodo *anterior;

   friend class lista;
};