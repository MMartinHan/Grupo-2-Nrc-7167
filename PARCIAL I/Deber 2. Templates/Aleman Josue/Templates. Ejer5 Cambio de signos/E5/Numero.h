template<typename T>
class Numero {
private:
	T* arr;
	int dimension;
public:
	Numero(int dimension);
	void insertarElementos();
	void cambiarSignos();
	void imprimirVector();

};