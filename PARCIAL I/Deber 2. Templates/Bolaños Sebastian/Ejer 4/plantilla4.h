#include <iostream>

using namespace std; 
template <typename T>

class plantilla4
{
	public:
		plantilla4(T a, T b){
			ma = a;
			mb = b;
		}
		void print();
	private: 
		T ma, mb; 
};


