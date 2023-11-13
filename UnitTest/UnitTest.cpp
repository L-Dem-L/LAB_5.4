#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.4/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 5;
			int K = 16;
			double tolerance = 0.0001;
			Assert::AreEqual(P0(N, K), P1(N, K, N), tolerance);
			Assert::AreEqual(P0(N, K), P2(N, K, K), tolerance);
			Assert::AreEqual(P0(N, K), P3(N, K, N, 1), tolerance);
			Assert::AreEqual(P0(N, K), P4(N, K, K, 1), tolerance);
		}
	};
}