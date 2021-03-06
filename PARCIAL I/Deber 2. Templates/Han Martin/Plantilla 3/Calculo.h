/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 3
    Autor: Martin Han
    Fecha de creacion: 31/10/2021
    Fecha de modificacion: 31/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#ifndef OPERACION_H
#define OPERACION_H

template <typename T>
class Calculo
{
private:
    T num;
public:
    Calculo(T num);
    void setnum(T d);
    T getnum()const;
};

#endif