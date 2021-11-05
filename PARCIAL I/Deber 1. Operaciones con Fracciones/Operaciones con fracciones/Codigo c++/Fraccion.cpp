#include <iostream>
#include "Fraccion.h"
#include "Calculo.h"


using namespace std;


/**
 * @brief Fraccion::Fraccion
 *        Constructor vacio de la clase Operacion
 *
 * @tparam No recibe parametros
 * @param previous
 */
Fraccion::Fraccion() {

}


/**
 * @brief Fraccion::Fraccion
 *        Constructor con parametros de la clase Operacion
 *
 * @tparam float numerador, float denominador
 * @param previous
 */
Fraccion::Fraccion(float num, float den) {

	this->num = num;
	this->den = den;

}

/**
 * @brief Fraccion::imprimir
 *        Muestra en pantalla resultados
 *
 * @tparam No recibe parametros
 * @param previous
 */
void Fraccion::imprimir() {

	cout << "Numerador: " << getNum() << endl;
	cout << "Denominador: " << getDen() << endl;
	cout << "Resultado: " << num / den;
}

/**
 * @brief Fraccion::pedirDatos
 *        La funcion pide datos, en este caso, numerador y denominador
 *
 * @tparam No recibe parametros
 * @param previous
 */
void Fraccion::pedirDatos() {


	cout << "Ingrese el valor del numerador: ";
	cin >> num;

	cout << "Ingrese el valor del denominador: ";
	cin >> den;

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
void Fraccion::calcular() {

	Fraccion* fracciones = new Fraccion[2]; //En este problema, necesitamos DOS fracciones, declaramos arreglo de tipo dinamico del objeto

	for (int i = 0; i < 2; i++) {
		(fracciones + i)->pedirDatos();
		cout << endl;
	}

	float n1, n2, d1, d2; //Declaramos variables genericas para realizar las operaciones aritmeticas correspondientes

	n1 = (fracciones + 0)->getNum();
	n2 = (fracciones + 1)->getNum();

	d1 = (fracciones + 0)->getDen();
	d2 = (fracciones + 1)->getDen();

	num = ((n1 * d2) + (n2 * d1));
	den = ((d1 + d2));


}

/**
 * @brief Operacion::setNumerador
 *        Metodo Setter que permite modificar el valor del atributo
 *
 * @tparam float numerador
 * @param previous
 */
void Fraccion::setNum(float num) {
	this->num = num;
}

/**
 * @brief Operacion::getNumerador
 *        Metodo Getter que permite obtener el valor inicializado del atributo
 *
 * @tparam No recibe parametros
 * @param previous
 */
float Fraccion::getNum() {
	return num;
}

/**
 * @brief Operacion::setDenominador
 *        Metodo Setter que permite modificar el valor del atributo
 *
 * @tparam float denominador
 * @param previous
 */
void Fraccion::setDen(float den) {
	this->den = den;
}

/**
 * @brief Operacion::getDenominador
 *        Metodo Getter que permite obtener el valor inicializado del atributo
 *
 * @tparam No recibe parametros
 * @param previous
 */
float Fraccion::getDen() {
	return den;
}
