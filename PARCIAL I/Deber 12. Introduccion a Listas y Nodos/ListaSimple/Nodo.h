#pragma once

template<typename T>
class Nodo {
	private:
		T data;
		Nodo<T> *vinculo;
	public:
		Nodo() = default;
		T getValor();
		void setValor(T);
		
	template<typename T>
	friend class Lista;
};