#include <iostream>
using namespace std;

template<typename T>
class Fraccion {

	private:

		T* numeros;

	public:

		Fraccion() = default;
		Fraccion(int dimension);
		void elegirTipoDeDato();
		void insertarElementos();
		void calcular();

}; 