#include <iostream>
#include <stdlib.h>
#include "Archivo.h"
#include "Archivo.cpp"
#include "Calculo.h"
#include "Calculo.cpp"

using namespace std;

int main() {

    cout << "GRUPO2. metodos sobrecargados con plantillas y archivos" << endl;
    system("PAUSE");

    Archivo<double> f("hola");
    Calculo calculo;
    cout << "SUMA: " << calculo.sumar(f.leer()) << endl;

    return 0;
    
}