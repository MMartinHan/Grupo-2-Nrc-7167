#include <iostream>
#include "Fraccion.h"


using namespace std;


/**
 * @brief Fraccion::Fraccion
 *        Constructor vacio de la clase Operacion
 *
 * @tparam No recibe parametros
 * @param previous
 */

 /**
  * @brief Fraccion::Fraccion
  *        Constructor con parametros de la clase Operacion
  *
  * @tparam float numerador, float denominador
  * @param previous
  */
template<typename T>
Fraccion<T>::Fraccion(int dim) {

	this->numeros = (T*)calloc(dim, sizeof(T*));

}

template<typename T>
void Fraccion<T>::insertarElementos() {
	
	int n = 0, d = 0; //contadores
	for (int i = 0; i < 4; i++) {
		if ((i % 2) != 0) {
			d++;
			cout << "Insertar " << d << " denominador: ";
			cin >> numeros[i];
		}
		else if ((i % 2) == 0){
			n++;
			cout << "Insertar " << n << " numerador: ";
			cin >> numeros[i];
		}
	}
}


/**
 * @brief Fraccion::calcular
 *        La funcion inicializa variables genericas de tipo flotante usando getters,
 *        realiza las operaciones correspondientes e inicializa los valores de los atributos
 *        de la clase Fraccion
 *
 * @tparam No recibe parametros
 * @param previous
 */
template<typename T>
void Fraccion<T>::elegirTipoDeDato() {

	int opc;
	cout << "Por favor elegir el tipo de dato con el que deseas trabajar: " << endl;
	cout << "1. Enteros " << endl << "2. Flotantes" << endl; cin >> opc;
	system("cls");

	if (opc == 1)
	{
		Fraccion<int> enteros(4);
		enteros.insertarElementos();
		enteros.calcular();

	}
	else if (opc == 2)
	{
		Fraccion<float> flotantes(4);
		flotantes.insertarElementos();
		flotantes.calcular();

	}
}
template<typename T>
void Fraccion<T>::calcular() {

	for (int i = 0; i < 4; i++) {
		cout << "\t" << numeros[i];
		cout << "\n";
	}

	float n1, n2, d1, d2; 

	n1 = this->numeros[0];
	n2 = this->numeros[2];

	d1 = this->numeros[1];
	d2 = this->numeros[3];

	float num = ((n1 * d2) + (n2 * d1));
	float den = ((d1 + d2));
	cout << "Numerador: " << num << endl;
	cout << "Denominador: " << den << endl;
	cout << "Resultado: " << num / den << endl;
	cout << "\n";

}