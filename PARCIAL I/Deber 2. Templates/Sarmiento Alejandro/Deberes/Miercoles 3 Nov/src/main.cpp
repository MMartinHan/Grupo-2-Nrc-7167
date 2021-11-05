#include <iostream>
#include "Repartidor.h"
#include "Repartidor.cpp"


using namespace std;

int main(){

    Repartidor<char> r1("Toyota", "Roberto", 'A');
    Repartidor<int> r2("Nissan", "Juan", 20);
    Repartidor<double> r3("Hyundai", "Pedro", 19.5);

    r1.mostrar();
    cout<<endl;
    r2.mostrar();
    cout<<endl;
    r3.mostrar();

    return 0;
}