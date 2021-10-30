#include "Plantilla.h"

template <typename T>
void Numero<T>::setNum(T n){
	this->num=n;
}
template <typename T>
T Numero<T>::getNum() const{
	return this->num;
}