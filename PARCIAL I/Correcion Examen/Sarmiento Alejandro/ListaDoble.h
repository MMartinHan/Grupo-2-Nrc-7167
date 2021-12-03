#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include <iostream>
#include "NodoDoble.h"

using namespace std;

class ListaDoble
{
    public:
        NodoDoble* inicio;
        void imprimir();
        void agregarNodo(NodoDoble* nodo);
        void borrarUltimo();
        void borrarEnmedio(int pos);
        void borrarNodo(int pos);
        void agregarNodo(NodoDoble* nodo, int pos);
        void calculoIva();
        void calculoTotal();
        void calculoDescuento();
        void total_aPagar();

        ListaDoble();

        virtual ~ListaDoble();
    protected:
    private:
};

#endif // LISTADOBLE_H
