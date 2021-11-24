#pragma once

template<typename T>
class Nodo {
private:
	T data;
	Nodo* vinculo;
public:
	Nodo(T);
	T getData();
	void setData(T);

	template<typename T>
	friend class Lista;
};