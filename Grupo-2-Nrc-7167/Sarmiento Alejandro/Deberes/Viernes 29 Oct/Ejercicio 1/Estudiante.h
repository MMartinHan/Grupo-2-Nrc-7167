#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>

using namespace std;

template <class T>
class Estudiante{
    private:
        string nombre;
        T calificacion;
    public:
        Estudiante(string nombre, T calificacion){
            this->nombre = nombre;
            this->calificacion = calificacion;
        }
        string getNombre(){
            return nombre;
        }
        T getCalificacion(){
            return calificacion;
        }
        void setNombre(string nom){
            this->nombre=nom;
        }
        void setCalificacion(T cal){
            this->calificacion=cal;
        }
        void mostrarDatos(){
            cout<< "Nombre: "<<nombre<<endl;
            cout<< "Calificacion: "<<calificacion<<endl;
        }
};
#endif
