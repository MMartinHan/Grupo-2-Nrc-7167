#include <iostream>

template <typename T>
class Arreglo {
private:
	T* arr;
public:
	Arreglo() = default;
	Arreglo(int dimension);
	T* insertarElementos(int dimension);
	void imprimirArreglo(T* arr, int dimension);
	T sumarElementos(T* arr, int dimension);
	void verificarNumero(T* arr, int dimension);
	void mostrarNumero(T numero);
};