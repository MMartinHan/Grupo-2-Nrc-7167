#include <iostream>

using namespace std;

template <typename T>
class Numero {

private:
	T * arreglo;
public:
	Numero() = default;
	Numero(int dim);

	T* getArreglo();
	void iniciarElementos(int dimension);
	void setArreglo(T* arreglo);
	void ordenarArreglo(T* arr, int dim);
	void intercambiar(T &valor1, T &valor2);
	void imprimir(T* arreglo, int dimension);
};