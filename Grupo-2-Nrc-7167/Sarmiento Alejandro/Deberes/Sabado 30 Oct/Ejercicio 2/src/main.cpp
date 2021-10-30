#include <iostream>
#include "Operacion.h"
#include "Operacion.cpp"

using namespace std;

int main(){

    Operacion<int> op1(5,2);
    Operacion<float> op2(5.5,2.5);
    Operacion<double> op3(5.5,9.8);

    cout<< "**Enteros**"<<endl;
    cout << "Suma de enteros: " << op1.suma() << endl;
    cout << "Resta de enteros: " << op1.resta() << endl;
    cout << "Multiplicacion de enteros: " << op1.multiplicacion() << endl;
    cout << "Division de enteros: " << op1.division() << endl;

    cout<< "**Flotantes**"<<endl;
    cout << "Suma de flotantes: " << op2.suma() << endl;
    cout << "Resta de flotantes: " << op2.resta() << endl;
    cout << "Multiplicacion de flotantes: " << op2.multiplicacion() << endl;
    cout << "Division de flotantes: " << op2.division() << endl;

    cout<< "**Reales**"<<endl;
    cout << "Suma de reales: " << op3.suma() << endl;
    cout << "Resta de reales: " << op3.resta() << endl;
    cout << "Multiplicacion de reales: " << op3.multiplicacion() << endl;
    cout << "Division de reales: " << op3.division() << endl;

    return 0;
}