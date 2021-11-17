#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1/Lab 6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c[3] = { -2, 5, 7 };
			int S = Sum(c, 3);
			Assert::AreEqual(S, 12);

		}
	};
}
