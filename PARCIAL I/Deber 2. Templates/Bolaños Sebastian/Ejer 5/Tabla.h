#include <iostream>
template <class T>
class Tabla {
  public:
   Tabla(int nElem);
   ~Tabla();
   T& operator[](int indice) { return pT[indice]; }
   int NElementos() const { return nElementos; }

  private:
   T *pT;
   int nElementos;
};
