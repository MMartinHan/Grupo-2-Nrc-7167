#include "Tabla.h"
template <class T>
Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
   pT = new T[nElementos];
}

template <class T>
Tabla<T>::~Tabla() {
   delete[] pT;
}
