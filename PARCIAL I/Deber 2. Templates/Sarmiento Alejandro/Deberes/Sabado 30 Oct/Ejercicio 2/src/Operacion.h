#ifndef OPERACION_H
#define OPERACION_H

template<typename T>
class Operacion{
    private:
        T num1;
        T num2;
    public:
        Operacion(T num1, T num2);
        T suma();
        T resta();
        T multiplicacion();
        T division();

};
#endif