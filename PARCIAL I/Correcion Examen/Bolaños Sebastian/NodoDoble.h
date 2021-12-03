#ifndef NODODOBLE_H
#define NODODOBLE_H
#include <iostream>

class NodoDoble{
    public:
        float num;
        NodoDoble* ant;
        NodoDoble* sig;
        NodoDoble(float num);
        virtual ~NodoDoble();
    protected:
    private:
};

#endif 
