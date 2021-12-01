#include <string>
#include <limits>
#include <iostream>
#include <regex>
#include "ListaCalculo.h"
#include "Calculo.h"

using namespace std;


ListaCalculo calcular(float subtotal, ListaCalculo totales, Calculo calculo) {


    float iva, total;
    float descuento = 1;

    iva = (subtotal * 12) / 100;
    
    total = (subtotal - iva);

    if (total >= 1 && total <= 100.0) {
        descuento = 5.0;
    }
    else if (total >= 100.1 && total <= 1000.0) {
        descuento = 10.0;
    }
    else if(total > 1000.0){
        descuento = 15.0;
    }

    total = total - ((total * descuento) / 100);

	calculo = Calculo(subtotal, iva, total, descuento);
    totales.agregarPorCabeza(calculo);

    return totales;

}

float leerFlotante(
    string message,
    size_t minimum = numeric_limits<float>::min(),
    size_t maximum = numeric_limits<float>::max()) {
    string input;
    float value;

    do {
        cout << message;
        cin >> input;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        smatch sm;
        bool valid = regex_match(input, sm, regex("^[+-]?([0-9]*[.])?[0-9]+$"));

        if (!valid) continue;

        value = stof(input);

        if (value < minimum || value > maximum) {
            continue;
        }

        break;
    } while (true);

    return value;
}

int main(int argv, char** argc) {

    ListaCalculo totales;
    Calculo calculo;

	float valor;
	bool continuar = true;

    int opc = 1;
    do {
        valor = leerFlotante("Ingresar el valor a calcular: ");
        totales = calcular(valor, totales, calculo);
        cout << endl << endl;
        cout << "Desea calcular otro valor? Si(1), No(0)" << endl; cin >> opc;
    } while (opc==1);


    totales.mostrarCalculos();


	return 0;
}