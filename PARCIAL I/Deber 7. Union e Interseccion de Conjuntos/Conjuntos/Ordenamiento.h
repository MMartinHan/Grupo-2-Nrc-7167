#pragma once
template<typename T>
class Ordenamiento {
public:
	Ordenamiento() = default;
	void ordenar(T*&, int);
	void intercambiar(T&, T&);
};