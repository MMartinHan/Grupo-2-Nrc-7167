/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Introduccion a las Listas
    Autores:
        - Aleman Josue
        - Bolanios Sebastian
        - Han Martin
        - Sarmiento Bryan
    Fecha de creacion: 21/11/2021
    Fecha de modificacion: 21/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#include < iostream>
#include <cstdlib>
#include "Lista.h"
#include "Lista.cpp"

using namespace std;

int main(int argv, char** argc) {

    cout << "LISTAS SIMPLES!" << endl;
    Lista<int> lista;
    
    //CREAMOS NODOS E INSERTAMOS DATOS EN CADA NODO
    int i = 0;
    int num;
    while (i < 5) {
        cout << "Ingrese un numero para almacenamiento: ";  cin >> num;
        lista.insertar(num);
        i++;
    }

    //MOSTRAMOS LA LISTA SIMPLE CREADA
    lista.mostrar();

	return 0;
}