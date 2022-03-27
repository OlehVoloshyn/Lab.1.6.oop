#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.1.6/AlcoholL.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			AlcoholL t, a;
			t.setStrenght(9);
			a.setStrenght(9);
			Assert::AreEqual(t.getStrenght(), a.getStrenght());
		}
	};
}
