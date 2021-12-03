#include <iostream>
#include "ListaDoble.h"
#include "ListaDoble.cpp"
#include "NodoDoble.h"
#include "NodoDoble.cpp"

using namespace std;

int main()
{
    ListaDoble D;
    float valor;
    cout<< "¿Cual es el subtotal? ";
    cin>> valor;
    D.agregarNodo(new NodoDoble(valor)); 
    D.imprimir();
    system("pause");

    return 0;
}
