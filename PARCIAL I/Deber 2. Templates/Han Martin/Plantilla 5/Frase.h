/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 5
    Autor: Martin Han
    Fecha de creacion: 2/11/2021
    Fecha de modificacion: 2/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#ifndef OPERACION_H
#define OPERACION_H

template <typename T>
class Frase
{
private:
    T caracter;
public:
    Frase(T caracter);
    void setFrase(T caracter);
    T getFrase()const;
    
};

#endif