#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include "lista.h"
#include "lista.cpp"
#include "nodo.cpp"

using namespace std;

int main(){
    lista Lista;

   Lista.Insertar(20);
   Lista.Insertar(10);
   Lista.Insertar(40);
   Lista.Insertar(30);

   Lista.Mostrar(ASCENDENTE);
   Lista.Mostrar(DESCENDENTE);

   Lista.Primero();
   cout << "Primero: " << Lista.ValorActual() << endl;

   Lista.Ultimo();
   cout << "Ultimo: " << Lista.ValorActual() << endl;

   Lista.Borrar(10);
   Lista.Borrar(40);

   Lista.Mostrar(ASCENDENTE);
   Lista.Mostrar(DESCENDENTE);

    return 0;
}