#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int dimension = 3;
			for (int i = 0; i < dimension; i++) {
				for (int j = 0; j < dimension; j++) {
					for (int k = 0; k < dimension; k++) {
						*(*((producto.matriz) + i) + j) = *(*((producto.matriz) + i) + j) + (*(*((matriz)+i) + k)) * (*(*((matriz)+k) + j));
					}
				}
			}
		}
	};
}
