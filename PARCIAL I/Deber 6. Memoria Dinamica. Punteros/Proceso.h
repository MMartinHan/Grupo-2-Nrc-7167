#pragma once

template <typename T>
class Proceso{
    private:
        T* ptr;
        int dimension;
    public:
        Proceso(int dimension);
        void ingresar();
        void procesar();
        void imprimir();
};