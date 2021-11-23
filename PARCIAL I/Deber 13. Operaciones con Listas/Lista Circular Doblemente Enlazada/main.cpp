#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Menu.h"
#include "Nodo.h"
#include "Validaciones.h"
#include "Nodo.cpp"
#include "ListaCircularDoble.h"
#include "ListaCircularDoble.cpp"

using namespace std;

int main(){
    ListaCircularDoble *lista = new ListaCircularDoble();
    Menu *menu = new Menu();
    int opcion;
    int dato;
    lista->insertar(1);
    lista->insertar(2);
    lista->insertar(3);
    lista->insertar(4);
    lista->insertar(5);

    lista->imprimir();

    cout<<"\n";

    lista->eliminar(3);

    lista->imprimir();

    menu->menu();
    


}