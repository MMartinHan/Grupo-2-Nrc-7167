/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 1
    Autor: Martin Han
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include<iostream>
#include<string>
#include<string.h>
#include"Dato.cpp"

using namespace std;


int main(){
    Dato<int> entero;
    Dato<double> real;
    Dato<char> caracter;
    entero.setDato(20);
    real.setDato(1.24134234);
    caracter.setDato('A');
    cout<<"\n Dato de tipo entero: "<<entero.getDato();
    cout<<"\n Dato de tipo entero: "<<real.getDato();
    cout<<"\n Dato de tipo entero: "<<caracter.getDato()<<endl;
}