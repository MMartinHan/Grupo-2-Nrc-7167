#ifndef CALCULO_H
#define CALCULO_H


class Calculo {
    public:
        template<typename... T>
        auto sumar(T... args);

};

#endif 