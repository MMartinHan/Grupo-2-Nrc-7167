/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 1
    Autor: Martin Han
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Caracter.cpp"
#include "Caracter.h"

using namespace std;

int main(){
    Caracter<char> c1('H');
    Caracter<char> c2('O');
    Caracter<char> c3('L');
    Caracter<char> c4('A');

    cout<<c1.getCaracter()<<c2.getCaracter()<<c3.getCaracter()<<c4.getCaracter()<<endl;
}