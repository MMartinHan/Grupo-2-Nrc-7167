#pragma once
template<typename T>
class Matriz {
private :
	T** matriz;
	int dimension;
public:
	Matriz(int);
	void ingresarElementos();
	Matriz multiplicar(Matriz);
	void imprimir();
	T obtener(int, int);
	void definir(T, int, int);
};