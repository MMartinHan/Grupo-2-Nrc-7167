#include "Hanoi.h"
#include <iostream>
#include <cstdlib>

using namespace std;

template<typename T>
void Hanoi<T>::hanoi(T discos, char a, char c, char b) {
	if (discos == 1) {
		cout << "Mover el disco " << discos << " Desde " << a << " Hasta " << b << endl;
	}
	else {

		hanoi(discos - 1, a, b, c);
		cout << "Mover el disco " << discos << " Desde " << a << " Hasta " << b << endl;
		hanoi(discos - 1, c, a, b);
	}

}