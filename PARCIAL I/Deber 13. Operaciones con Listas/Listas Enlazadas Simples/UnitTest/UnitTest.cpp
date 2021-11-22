#include "pch.h"
#include "CppUnitTest.h"
#include "../ListaSimple/Lista.h"
#include "../ListaSimple/Nodo.h"
#include "../ListaSimple/Lista.cpp"
#include "../ListaSimple/Nodo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(getSum)
		{
			Lista<int> lista;
			lista.agregarPorCabeza(1);
			lista.agregarPorCabeza(2);
			lista.agregarPorCabeza(3);
			lista.agregarPorCabeza(4);
			lista.agregarPorCabeza(5);
			lista.eliminar(2);
			Assert::AreEqual(13, lista.sumarLista());
		}
		TEST_METHOD(getSum2)
		{
			Lista<int> lista;
			lista.agregarPorCabeza(2);
			lista.agregarPorCabeza(2);
			lista.agregarPorCabeza(2);
			lista.agregarPorCabeza(2);
			lista.agregarPorCabeza(2);
			Assert::AreEqual(10, lista.sumarLista());
		}
		TEST_METHOD(getSum3)
		{
			Lista<int> lista;
			lista.agregarPorCabeza(1);
			lista.agregarPorCabeza(1);
			lista.agregarPorCabeza(1);
			lista.agregarPorCabeza(1);
			lista.agregarPorCabeza(5);
			Assert::AreEqual(9, lista.sumarLista());
		}
		TEST_METHOD(getSum4)
		{
			Lista<int> lista;
			lista.agregarPorCabeza(1);
			lista.agregarPorCabeza(2);
			lista.agregarPorCabeza(3);
			lista.agregarPorCabeza(4);
			lista.agregarPorCabeza(5);
			lista.eliminar(5);
			Assert::AreEqual(10, lista.sumarLista());
		}
	};

}
