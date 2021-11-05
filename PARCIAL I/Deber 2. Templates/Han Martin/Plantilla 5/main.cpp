/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 5
    Autor: Martin Han
    Fecha de creacion: 2/11/2021
    Fecha de modificacion: 2/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Frase.cpp"
#include "Frase.h"

using namespace std;

int main(){
    Frase<char> f1('H');
    Frase<char> f2('O');
    Frase<char> f3('L');
    Frase<char> f4('A');

    Frase<char> f5('M');
    Frase<char> f6('U');
    Frase<char> f7('N');
    Frase<char> f8('D');
    Frase<char> f9('O');

    cout<<f1.getFrase()<<f2.getFrase()<<f3.getFrase()<<f4.getFrase()<<" "<<f5.getFrase()<<f6.getFrase()<<f7.getFrase()<<f8.getFrase()<<f9.getFrase()<<endl;

    cout<<"Ingrese el nuevo caracter"<<endl;
    char a;
    cin>>a;
    f1.setFrase(a);
    cout<<f1.getFrase()<<f2.getFrase()<<f3.getFrase()<<f4.getFrase()<<" "<<f5.getFrase()<<f6.getFrase()<<f7.getFrase()<<f8.getFrase()<<f9.getFrase()<<endl;
}