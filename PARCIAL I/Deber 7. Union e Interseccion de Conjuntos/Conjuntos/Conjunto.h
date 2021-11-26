#pragma once

template<typename T>
class Conjunto {
private:
	T* elementos;
	int dimension;
public:
	Conjunto() = default;
	Conjunto(int);
	Conjunto(T*);
	T* getElementos();
	int getDimension();
	void ingresarElementos(int);
	void unir(T*, T*, int, int);
	void intersecar(T*, T*, int, int);
	void imprimir();

};