#include "pch.h"
#include "CppUnitTest.h"
#include "../E6/Arreglo.h"
#include <iostream>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitT6
{
	TEST_CLASS(UnitT6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int* arr;
			int dim = 5;
			for (int i = 0; i < dim; i++) {
				cout << "Ingresar el " << i + 1 << " elemento de su arreglo: ";
				cin >> arr[i];
				cout << "\n";
			}
		}
	};
}
