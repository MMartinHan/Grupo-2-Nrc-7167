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
#include <iostream>
#include <cstdlib>
#include "Lista.h"
#include "Lista.cpp"

using namespace std;


int main(int argv, char** argc) {

    cout << "OPERACIONES CON LISTAS SIMPLES:" << endl;

    //CREAMOS NUESTRA LISTA
    Lista<int> enteros;

    //AGREGAMOS DATOS A NUESTRA LISTA Y LA IMPRIMIMOS

    int i = 0;
    int num;
    while (i < 5) {
        cout << "Ingrese un numero para agregar a la lista: "; cin >> num;
        enteros.agregarPorCabeza(num);
        i++;
    }
    enteros.mostrar();

    //BUSCAMOS UN ELEMENTO PARA ELIMINARLO

    cout << "Escribir el numero que deseas eliminar: "; cin >> num;
    enteros.eliminar(num);
    enteros.mostrar();

    //OPERACIONES ARITMETICAS CON LA LISTA

    int suma = enteros.sumarLista();
    cout << "La suma de todos los elementos de la lista es: " << suma << endl;

	return 0;
}