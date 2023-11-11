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
			int N = 1, i = 0, K = 16;
			int n;
			n = (1.0 * i * N) / ((1.0 * i * i) + (1.0 * N * N));
			Assert::AreEqual(n, 0);
		}
	};
}