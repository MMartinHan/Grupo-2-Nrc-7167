#include <iostream>
#include <stdlib.h>
#include "Calculo.h"

using namespace std;

template <typename... T>
auto Calculo::sumar(T... args) {
    auto suma = 0.0;
    for(auto &v:{args...}) {
        suma+=v;
    }

    return suma;
}

