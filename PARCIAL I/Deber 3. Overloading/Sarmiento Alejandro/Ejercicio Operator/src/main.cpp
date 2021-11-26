#include <iostream>
#include "Operadores.h"
#include "Operadores.cpp"

using namespace std;

int main(){
    Operadores op(10);
    op.operator++();
    cout << op.getValor() << endl;
    op.operator--();
    cout << op.getValor() << endl;
    op.operator++(2);
    cout << op.getValor() << endl;
    op.operator--(2);
    cout << op.getValor() << endl;
    
    return 0;
}