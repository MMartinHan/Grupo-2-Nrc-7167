#include "Ordenamiento.h"

/**
 * @brief Ordenamiento<T>::ordenar
 *        Metodo que ordena un arreglo
 *
 * @tparam direccion de un arreglo dinamico, dimension del arreglo de tipo entero
 * @param previous
 */
template<typename T>
void Ordenamiento<T>::ordenar(T*& c, int dim) {
	for (int i = 0; i < dim - 1; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (c[i] > c[j]) {
				intercambiar(c[i], c[j]);
			}
		}
	}

}

/**
 * @brief Ordenamiento<T>::intercambiar
 *        Metodo que intercambia dos valores 
 *
 * @tparam direccion del primer valor, dimension del segundo valor
 * @param previous
 */
template<typename T>
void Ordenamiento<T>::intercambiar(T& v1, T& v2) {
	T aux = v1;
	v1 = v2;
	v2 = aux;
}