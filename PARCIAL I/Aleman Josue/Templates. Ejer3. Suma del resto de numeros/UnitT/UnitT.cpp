#include "pch.h"
#include "CppUnitTest.h"
#include "../E3/Arreglo.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitT
{
	TEST_CLASS(UnitT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int suma = 0;
			int* arr;

			int dim = 4;
			for (int i = 0; i < dim; i++) {
				suma += arr[i];
			}
			
		}
	};
}
