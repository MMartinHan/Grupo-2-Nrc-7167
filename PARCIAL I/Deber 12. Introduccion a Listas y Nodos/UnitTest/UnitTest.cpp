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
		
		TEST_METHOD(getDato1)
		{
			Lista<int> lista;
			Nodo<int> nodo;
			lista.insertar(5);
			Assert::AreEqual(5, nodo.getValor());
		}
	};
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(getDato2)
		{
			Lista<int> lista;
			Nodo<int> nodo;
			lista.insertar(321);
			Assert::AreEqual(321, nodo.getValor());
		}
	};
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(getDato3)
		{
			Lista<int> lista;
			Nodo<int> nodo;
			lista.insertar(-77);
			Assert::AreEqual(-77, nodo.getValor());
		}
	};
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(getDato4)
		{
			Lista<int> lista;
			Nodo<int> nodo;
			lista.insertar(10);
			Assert::AreEqual(10, nodo.getValor());
		}
	};
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(getDato5)
		{
			Lista<int> lista;
			Nodo<int> nodo;
			lista.insertar(-666);
			Assert::AreEqual(-666, nodo.getValor());
		}
	};
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(getDato6)
		{
			Lista<int> lista;
			Nodo<int> nodo;
			lista.insertar(1);
			Assert::AreEqual(1, nodo.getValor());
		}
	};
}
