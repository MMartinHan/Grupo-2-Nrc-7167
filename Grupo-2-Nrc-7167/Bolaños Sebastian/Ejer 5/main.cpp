/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Ejercicio 5 feriado
    Autor: Sebastian Bolaños 
    Fecha de creacion: 02/11/2021
    Fecha de modificacion: 02/11/2021
    Materia: Estructura de Datos
    Nrc: 7167
*/
#include <iostream>
#include "Tabla.cpp"

using namespace std;

const int nElementos = 5;

int main() {
   Tabla<int> TablaInt(nElementos);
   Tabla<float> TablaFloat(nElementos);

   for(int i = 0; i < nElementos; i++)
      TablaInt[i] = nElementos-i;

   for(int i = 0; i < nElementos; i++)
      TablaFloat[i] = 1/(1+i);

   for(int i = 0; i < nElementos; i++) {
      cout << "TablaInt[" << i << "] = "
           << TablaInt[i] << endl;
      cout << "TablaFloat[" << i << "] = "
           << TablaFloat[i] << endl;
   }

   return 0;
}
