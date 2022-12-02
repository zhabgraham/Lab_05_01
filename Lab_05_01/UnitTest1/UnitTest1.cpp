#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_01.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double k;
			k = g(2, 9);
			Assert::AreEqual(k, 0.211765, 0.0001);
		}
	};
}