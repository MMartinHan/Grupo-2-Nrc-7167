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
			int dim = 2;
			int** matriz;
			int** m1;
			int** m2;
			for (int i = 0; i < dim; i++) {
				for (int j = 0; j < dim; j++) {
					for (int k = 0; k < dim; k++) {
						*(*(matriz + i) + j) = *(*(matriz + i) + j) + (*(*(m1 + i) + k)) * (*(*(m2 + k) + j));
					}
				}
			}
		}
	};
}
