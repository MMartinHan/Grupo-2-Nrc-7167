#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include "lista.h"

using namespace std;

#define ASCENDENTE 1
#define DESCENDENTE 0

lista::~lista() {
   pnodo aux;

   Primero();
   while(plista) {
      aux = plista;
      plista = plista->siguiente;
      delete aux;
   }
}

void lista::Insertar(int v) {
   pnodo nuevo;

   Primero();
   // Si la lista está vacía
   if(ListaVacia() || plista->valor > v) {
      // Asignamos a lista un nuevo nodo de valor v y
      // cuyo siguiente elemento es la lista actual
      nuevo = new nodo(v, plista);
      if(!plista) plista = nuevo;
      else plista->anterior = nuevo;
   }
   else {
      // Buscar el nodo de valor menor a v
      // Avanzamos hasta el último elemento o hasta que el siguiente tenga
      // un valor mayor que v
      while(plista->siguiente && plista->siguiente->valor <= v) Siguiente();
      // Creamos un nuevo nodo después del nodo actual
      nuevo = new nodo(v, plista->siguiente, plista);
      plista->siguiente = nuevo;
      if(nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
   }
}

void lista::Borrar(int v) {
   pnodo nodo;

   nodo = plista;
   while(nodo && nodo->valor < v) nodo = nodo->siguiente;
   while(nodo && nodo->valor > v) nodo = nodo->anterior;

   if(!nodo || nodo->valor != v) return;
   // Borrar el nodo

   if(nodo->anterior) // no es el primer elemento
      nodo->anterior->siguiente = nodo->siguiente;
   if(nodo->siguiente) // no el el último nodo
      nodo->siguiente->anterior = nodo->anterior;
   delete nodo;
}

void lista::Mostrar(int orden) {
   pnodo nodo;
   if(orden == ASCENDENTE) {
      Primero();
      nodo = plista;
      while(nodo) {
         cout << nodo->valor << "-> ";
         nodo = nodo->siguiente;
      }
   }
   else {
      Ultimo();
      nodo = plista;
      while(nodo) {
         cout << nodo->valor << "-> ";
         nodo = nodo->anterior;
      }
   }
   cout << endl;
}

void lista::Siguiente() {
   if(plista) plista = plista->siguiente;
}

void lista::Anterior() {
   if(plista) plista = plista->anterior;
}

void lista::Primero() {
   while(plista && plista->anterior) plista = plista->anterior;
}

void lista::Ultimo() {
   while(plista && plista->siguiente) plista = plista->siguiente;
}
