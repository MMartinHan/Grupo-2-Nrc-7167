#include <iostream>


template<typename T>
class Dato {
	private:
		T mayor;
		int tipoDeDato;
	public:
		Dato(T mayor, int tipoDeDato);
		void trabajarConDatos(int dimension);
};