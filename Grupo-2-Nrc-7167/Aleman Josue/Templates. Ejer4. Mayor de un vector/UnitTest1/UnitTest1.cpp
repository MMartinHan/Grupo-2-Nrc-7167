#include "pch.h"
#include "CppUnitTest.h"
#include "../E4/Arreglo.h"
#include "../E4/Dato.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int mayor = 0;
			Arreglo<int> enteros(5);
			int posicion = enteros.insertarElementos(mayor);
			enteros.mostrarMayor(mayor);
		}
	};
}
