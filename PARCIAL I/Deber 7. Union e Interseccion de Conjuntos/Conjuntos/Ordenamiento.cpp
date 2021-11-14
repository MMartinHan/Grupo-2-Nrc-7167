#include "Ordenamiento.h"


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

template<typename T>
void Ordenamiento<T>::intercambiar(T& v1, T& v2) {
	T aux = v1;
	v1 = v2;
	v2 = aux;
}