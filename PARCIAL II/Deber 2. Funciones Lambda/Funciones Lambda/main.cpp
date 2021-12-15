#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <random>
#include <iterator>
#include <functional>

using namespace std;

int lambda1();
float lambda2(float);
void lambda3(int, int);
void lambda4(int);
void lambda5(int);

int main(){
    int opcion, filas, columnas;
    auto n = 0;
    auto m = 0.0;

    do{
        system("color F");
        cout << "\tMENU" << endl;
        cout << "1. Lambda 1: [] ( parametros ) -> return { body }" << endl;
        cout << "2. Lambda 2: [=] ( parametros ) -> return { body }" << endl;
        cout << "3. Lambda 3: [&] ( parametros ) -> return { body }" << endl;
        cout << "4. Lambda 4: [&, i] ( parametros ) -> return { body }" << endl;
        cout << "5. Lambda 5: for each [] ( parametros ) -> return { body }" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                lambda1();
                cout << endl;
                system("pause");
                break;
            case 2:
                lambda2(m);
                cout << endl;
                system("pause");
                break;
            case 3:
                lambda3(filas, columnas);
                cout << endl;
                system("pause");
                break;
            case 4:
                lambda4(n);
                cout << endl;
                system("pause");
                break;
            case 5:
                lambda5(n);
                cout << endl;
                system("pause");
                break;
            case 6:
                break;
            default:
                cout << "Opcion invalida" << endl;
                system("pause");
                break;
        }
    system("cls");
    }while(opcion != 6);


    return 0;
}
int lambda1(){
    auto lambda3 = []() -> int{
        //serie de fibonacci
        int a = 0, b = 1, c = 0, n;
        cout << "Digite el numero de elementos de la serie: ";
        cin >> n;
        cout << "La serie de fibonacci es: " << a << " " << b;
        for(int i = 0; i < n; i++){
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
        return n;
    };
    return lambda3();
}

float lambda2(float n){
    auto lambda2 = [=](float n) -> float{
        cout << "Digite el subtotal: ";
        cin >> n;
        float iva = n * 0.12;
        float total = n + iva;
        float descuento = total * 0.15;
        float total_final = total - descuento;

        cout << "El subtotal es: " << n << endl;
        cout << "El iva es: " << iva << endl;
        cout << "El total es: " << total << endl;
        cout << "El descuento es: " << descuento << endl;
        cout << "El total final es: " << total_final << endl;

        return n;
    };
    return lambda2(n);
}

void lambda3(int filas, int columnas){
    auto lambda1 = [&](int filas, int columnas) -> void{
        int **matriz;
        cout << "Ingrese el numero de filas: ";
        cin >> filas;
        cout << "Ingrese el numero de columnas: ";
        cin >> columnas;
        matriz = new int*[filas];
        for(int i = 0; i < filas; i++){
            *(matriz+i) = new int[columnas];
        }
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas; j++){
                *(*(matriz+i)+j) = rand() % 10;
            }
        }
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas; j++){
                cout << *(*(matriz+i)+j) << " ";
            }
            cout << endl;
        }
        for(int i = 0; i < filas; i++){
            delete[] *(matriz + i);
        }
        delete[] matriz;
    };
    lambda1(filas, columnas);
}

void lambda4(int n){
    auto lambda4 = [&](int n) -> void{
        fflush(stdin);
        cout << "Ingrese cuantos numeros aleatorios quiere generar: ";
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            v[i] = 1 + rand() % 100;
        }
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        cout << "Numeros Pares: " << endl;
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0){
                cout << v[i] << " ";
            }
        }
        cout << endl;
    };
    lambda4(n);
}

void lambda5(int d){
    cout << "Ingrese un numero entero: ";
    cin >> d;
    vector <int> v{1+rand()%101-1};
    for_each(v.begin(), v.end(), [d] (int x){
        if(x%d==0){
            cout << x << " Es divisible para " << d << endl;
        }
        else{
            cout << x << " No es divisible para " << d << endl;
        }
    });
}



