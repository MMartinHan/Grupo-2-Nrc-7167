/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 2
    Autor: Martin Han
    Fecha de creacion: 30/10/2021
    Fecha de modificacion: 30/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Operacion.h"
#include "Operacion.cpp"

using namespace std;

int main(){

    Operacion<int> op1(10,34);
    Operacion<float> op2(5.5,2.5);
    Operacion<double> op3(5.5,9.8);

    cout << "Suma de enteros: " << op1.suma() << endl;
    cout << "Resta de enteros: " << op1.resta() << endl;
    cout << "Multiplicacion de enteros: " << op1.multiplicacion() << endl;
    cout << "Division de enteros: " << op1.division() << endl;

    cout << "Suma de flotantes: " << op2.suma() << endl;
    cout << "Resta de flotantes: " << op2.resta() << endl;
    cout << "Multiplicacion de flotantes: " << op2.multiplicacion() << endl;
    cout << "Division de flotantes: " << op2.division() << endl;

    cout << "Suma de reales: " << op3.suma() << endl;
    cout << "Resta de reales: " << op3.resta() << endl;
    cout << "Multiplicacion de reales: " << op3.multiplicacion() << endl;
    cout << "Division de reales: " << op3.division() << endl;

    cout << "Modificacion de enteros"<<endl;
    cout << "El numero 1 entero actual es: "<< op1.getnum1() << endl;
    cout << "El numero 2 entero actual es: "<< op1.getnum2() << endl;
    cout << "Ingrese el reemplazo del numero 1: "<<endl;
    int a;
    cin >> a;
    op1.setnum1(a);
    cout << "El nuevo numero 1 es: " << op1.getnum1() << endl;
    cout << "Ingrese el reemplazo del numero 2: "<<endl;
    int b;
    cin >> b;
    op1.setnum2(b);
    cout << "El nuevo numero 2 es: " << op1.getnum2() << endl;

    cout << "Modificacion de decimales"<<endl;
    cout << "El numero 1 decimal actual es: "<< op2.getnum1() << endl;
    cout << "El numero 2 decimal actual es: "<< op2.getnum2() << endl;
    cout << "Ingrese el reemplazo del numero 1: "<<endl;
    float c;
    cin >> c;
    op2.setnum1(c);
    cout << "El nuevo numero 1 es: " << op2.getnum1() << endl;
    cout << "Ingrese el reemplazo del numero 2: "<<endl;
    float d;
    cin >> d;
    op2.setnum2(d);
    cout << "El nuevo numero 2 es: " << op2.getnum2() << endl;

    cout << "Modificacion de complejos"<<endl;
    cout << "El numero 1 complejo actual es: "<< op3.getnum1() << endl;
    cout << "El numero 2 complejo actual es: "<< op3.getnum2() << endl;
    cout << "Ingrese el reemplazo del numero 1: "<<endl;
    double e;
    cin >> e;
    op2.setnum1(e);
    cout << "El nuevo numero 1 es: " << op3.getnum1() << endl;
    cout << "Ingrese el reemplazo del numero 2: "<<endl;
    double f;
    cin >> f;
    op2.setnum2(f);
    cout << "El nuevo numero 2 es: " << op3.getnum2() << endl;

    return 0;
}