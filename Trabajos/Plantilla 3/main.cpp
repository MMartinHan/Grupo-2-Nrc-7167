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
#include "Calculo.h"
#include "Calculo.cpp"

using namespace std;

int main(){
    Calculo<int> cal1(3);
    Calculo<int> cal2(4);
    Calculo<int> cal3(5);
    Calculo<int> cal4(5);
    int matriz_num[2][2];
    matriz_num[1][1]=cal1.getnum();
    matriz_num[1][2]=cal2.getnum();
    matriz_num[2][1]=cal3.getnum();
    matriz_num[2][2]=cal4.getnum();

    cout<<matriz_num[1][1]<<" "<<matriz_num[1][2]<<endl;
    cout<<matriz_num[2][1]<<" "<<matriz_num[2][2]<<endl;
}