#include <iostream>

using namespace std;

template <class P>
P valorAbsolutoDeUnNumero(P numero);

int main()
{
   int entero          = -323;
   long largo          = -838237237;
   float real          = -3.1454;
   double realDoble    = -0.232352;

   cout<<valorAbsolutoDeUnNumero(entero)<<endl;
   cout<<valorAbsolutoDeUnNumero(largo)<<endl;
   cout<<valorAbsolutoDeUnNumero(real)<<endl;
   cout<<valorAbsolutoDeUnNumero(realDoble)<<endl;

    return 0;
}

template <class P>
P valorAbsolutoDeUnNumero(P numero){
return (numero < 0)? -numero : numero;
}
