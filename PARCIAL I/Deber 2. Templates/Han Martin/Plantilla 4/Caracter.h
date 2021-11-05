/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 4
    Autor: Martin Han
    Fecha de creacion: 1/11/2021
    Fecha de modificacion: 1/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#ifndef OPERACION_H
#define OPERACION_H

template <typename T>
class Caracter
{
private:
    T caracter;
public:
    Caracter(T caracter);
    void setCaracter(T caracter);
    T getCaracter()const;
    
};

#endif