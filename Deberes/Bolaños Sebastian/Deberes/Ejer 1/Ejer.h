#include <iostream>
#include <conio.h>
using namespace std;
template <typename t>
class Numero{
	public:
		void setNum(t a);
		t getNum()const;
	private:
		t num;
};
