#pragma once
template <typename T>
class Matriz {
private:
	T** matriz;
	int dimension;
public:
	Matriz(int);
	T** getMatriz();
	void encerar();
	void segmentar();
	void procesar(T**, T**, int);
	void ingresar();
	void imprimir();
};