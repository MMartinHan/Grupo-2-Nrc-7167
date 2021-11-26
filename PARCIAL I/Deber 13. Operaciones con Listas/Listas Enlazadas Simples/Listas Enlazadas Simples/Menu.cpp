#include <cstdlib>
#include <iostream>
#include "Menu.h"
#include "Lista.h"
#include "Lista.cpp"
#include "Utils.h"

using namespace std;

void Menu::crear() {

	Lista<int> enteros;
	mostrar(enteros);
}

void Menu::mostrar(Lista<int> enteros) {
	int opc = 4;
	do {
		cout << "Que desea hacer?: " << endl;
		cout << "1. Insertar elemento" << endl;
		cout << "2. Eliminar elemento" << endl;
		cout << "3. Modificar elemento" << endl;
		cout << "4. Suma de los elementos" << endl;
		cout << "5. Salir" << endl;
		cin >> opc;
		system("cls");
		enteros = elegir(opc, enteros);

	} while (opc != 5);
}

Lista<int> Menu::elegir(int opc, Lista<int> enteros) {
	int num;
	if (opc == 1) {
		int opc1;
		cout << "1. Insertar por cola" << endl;
		cout << "2. Insertar por cabeza" << endl;
		cout << "3. Insertar por medio" << endl;
		cout << "4. Regresar" << endl;
		cin >> opc1;
		system("cls");
		if (opc1 == 1) {

			int i = 0;
			while (i < 4) {
				cout << "Ingrese un numero para agregar a la lista: ";
				num = Utils::Validation::validation_numbers<int>("");
				enteros.agregarPorCola(num);
				i++;
			}
			enteros.mostrar();
			system("PAUSE");
			system("cls");
			return enteros;

		}
		else if (opc1 == 2) {
			int i = 0;
			while (i < 4) {
				cout << "Ingrese un numero para agregar a la lista: "; 
				num = Utils::Validation::validation_numbers<int>("");
				enteros.agregarPorCabeza(num);
				i++;
			}
			enteros.mostrar();
			system("PAUSE");
			system("cls");
			return enteros;
		}
		else if (opc1 == 3) {
			enteros.mostrar();
			int datoABuscar;
			cout << "Ingrese un numero para agregar a la lista: ";
			num = Utils::Validation::validation_numbers<int>("");
			cout << "Ingrese el elemento donde quiere agregar la lista: "; 
			datoABuscar = Utils::Validation::validation_numbers<int>("");
			enteros.agregarEntre(num, datoABuscar);
			enteros.mostrar();
			system("PAUSE");
			system("cls");
			return enteros;
		}
		else {
			return enteros;
		}
	}
	else  if(opc == 2) {
		enteros.mostrar();
		int num;
		cout << "Escribir el numero que deseas eliminar: ";
		num = Utils::Validation::validation_numbers<int>("");
		enteros.eliminar(num);
		enteros.mostrar();
		system("PAUSE");
		system("cls");
		return enteros;
	}
	else if (opc == 3) {
		enteros.mostrar();
		int datoABuscar;
		cout << "Seleccione el elemento que va a reemplazar: "; 
		datoABuscar = Utils::Validation::validation_numbers<int>("");
		cout << "Ingrese el nuevo elemento:  ";
		num = Utils::Validation::validation_numbers<int>("");
		enteros.modificar(num, datoABuscar);
		enteros.mostrar();
		system("PAUSE");
		system("cls");
		return enteros;
	}
	else if (opc == 4){
		if (enteros.estaVacia()) {
			cout << "Agregar elementos por cola o por cabeza primero!" << endl;
			system("PAUSE");
			system("cls");
			return enteros;
		}
		else {
			int suma = enteros.sumarLista();
			cout << "La suma de todos los elementos de la lista es: " << suma << endl;
			system("PAUSE");
			system("cls");
		}

	}
	else {
		exit(0);
	}

}