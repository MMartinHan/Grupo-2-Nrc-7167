#include <iostream>

template<typename T>
class Arreglo {

	private:
		T* arr;
	public:
		Arreglo(int dim);
		T* getArreglo();
		void ingresarElementos(int dim);
		int sumarElementos(T* arr, int dim);
		void imprimirArreglo(T* arr, int dim);
};
