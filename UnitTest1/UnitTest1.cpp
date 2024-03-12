#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.1(1)/Number.h"
#include "../lab2.1(1)/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number b;
			int t = b.getFirst();
			Assert::AreEqual(0, t);
		}
	};
}
