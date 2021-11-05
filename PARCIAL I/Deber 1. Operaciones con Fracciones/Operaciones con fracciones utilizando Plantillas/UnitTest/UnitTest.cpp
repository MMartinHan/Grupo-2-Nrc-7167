#include "pch.h"
#include "CppUnitTest.h"
#include "../Deber2/Fraccion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float* numeros[4];
			float n1, n2, d1, d2;

			n1 = this->numeros[0];
			n2 = this->numeros[2];

			d1 = this->numeros[1];
			d2 = this->numeros[3];

			float num = ((n1 * d2) + (n2 * d1));
			float den = ((d1 + d2));
		}
	};
}
