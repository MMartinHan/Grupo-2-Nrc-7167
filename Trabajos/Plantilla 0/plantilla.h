#include <iostream>
#include <stdlib.h>
using namespace std;
template <typename T>
class Numero{
	public:
		void setNum(T n);
		T getNum()const;
	private:
		T num;
};