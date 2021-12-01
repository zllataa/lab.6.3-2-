#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab32
{
	TEST_CLASS(UnitTestlab32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int sum;
			int a0 = 3, a1 = -22, a2 = 14, a3 = -43, a4 = 20, a5 = -48, a6 = 15, a7 = -53, a8 = -26, a9 = 2, a10 = -14, a11 = 2, a12 = -12, a13 = 3, a14 = 2;
			sum = a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14;
			Assert::AreEqual(sum, -157);
		}
	};
}
