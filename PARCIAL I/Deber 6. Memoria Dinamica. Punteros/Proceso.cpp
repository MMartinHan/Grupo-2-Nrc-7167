#include "Proceso.h"
#include "iostream"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

template<typename T>
Proceso<T>::Proceso(int dim) {
    this->dimension = dim;
    this->ptr = (T*)calloc(dim, sizeof(T*));
}

template<typename T>
void Proceso<T>::ingresar() {
    for(int i = 0; i < dimension; i++){
        cout << "\nIngrese el valor del " << i+1 << " elemento: ";
        scanf("%d", *(&ptr)+i);
    }
}

template<typename T>
void Proceso<T>::procesar() {

    int escalar;
    cout << "\nIngrese el escalar: " << endl; 
    cin >> escalar;
    for(int i = 0; i < dimension; i++) {
        *ptr = (*(&(*ptr)))*escalar;
        *(ptr++);
    }

}

template<typename T>
void Proceso<T>::imprimir() {

    for(int i = 0; i < dimension; i++) {
        printf("\nValor ingresado: ");
		printf("%d",*(&(*ptr)));
        *(ptr++);	
    }
}
