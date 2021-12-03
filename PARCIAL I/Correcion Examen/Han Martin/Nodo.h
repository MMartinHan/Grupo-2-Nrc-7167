#pragma once
#include <iostream>

class Nodo
{
    private:
        float subtotal;
        float iva;
        float total;
        float descuento;
        float precio;
        Nodo *siguiente;
        Nodo *anterior;
    public:
        Nodo();
        Nodo(float, float, float, float, float, Nodo*, Nodo*);
        void setSubtotal(float);
        void setIva(float);
        void setTotal(float);
        void setDescuento(float);
        void setPrecio(float);
        void setSiguiente(Nodo *);
        void setAnterior(Nodo *);
        float getSubtotal();
        float getIva();
        float getTotal();
        float getDescuento();
        float getPrecio();
        Nodo *getSiguiente();
        Nodo *getAnterior();
        void insertEnd(Nodo** start,float subtotal, float iva, float total, float descuento, float precio);
        void display(Nodo* start);
};