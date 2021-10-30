#include <iostream>
using namespace std;
template <typename t>
class Numero
{
	public:
		Numero(t _n1, t _n2){n1 =_n1; n2 =_n2;}
		t Mayor();
	private:
		t n1, n2;
};

