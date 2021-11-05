#include <iostream>


template <typename T>
class Arreglo {

	private:
		T* arr;
		int dimension;
	public:
		Arreglo(int dimension);
		int insertarElementos(T &mayor);
		void compararElementos(T &mayor);
		void mostrarMayor(T mayor);
		void modificarArreglo(int posicionMayor, T reemplazo);
		void imprimirArreglo();

};