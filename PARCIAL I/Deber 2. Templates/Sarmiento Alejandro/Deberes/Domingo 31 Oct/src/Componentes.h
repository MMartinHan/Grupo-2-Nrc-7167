#ifndef COMPONENTES_H
#define COMPONENTES_H

#include <iostream>

using namespace std;

template<typename T>
class Componentes{
    private:
        string cpu;
        T ram;
    
    public:
        Componentes(string cpu, T ram);
        string getCpu();
        T getRam();
        void mostrarComponentes();
};
#endif