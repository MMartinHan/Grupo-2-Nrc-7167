#include "pch.h"

#include "CppUnitTest.h"
#include "../OS/Complejo.h"
#include "../OS/Complejo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(suma1)
		{

			Complejo<int> A(1, 3);
			Complejo<int> B(1, 5);
			Complejo<int> resultadoEsperado(2, 8);
			//std::cout << "RESULTADO OBTENIDO: " << (A + B) << endl;
			//std::cout << "RESULTADO ESPERADO: " << resultadoEsperado << endl;
			Assert::AreEqual(resultadoEsperado, A + B);
		};
	};
};