/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 2
    Autor: Martin Han
    Fecha de creacion: 30/10/2021
    Fecha de modificacion: 30/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#ifndef OPERACION_H
#define OPERACION_H

template <typename T>

class Operacion
{
private:
    T num1;
    T num2;
public:
    Operacion(T num1, T num2);
    void setnum1(T d);
    T getnum1()const;
    void setnum2(T d);
    T getnum2()const;
    T suma();
    T resta();
    T multiplicacion();
    T division();
};
#endif