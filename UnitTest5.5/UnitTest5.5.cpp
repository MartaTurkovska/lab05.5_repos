#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Admin\Desktop\Марта, Політехніка\Алгоритмізація та програмування\ЛР 5\5\lab_05.5\lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const double b1 = 1;
			const double q = 2;
			const double n = 3;

			double test = q * (b1, q, n - 1);

			Assert::AreEqual(test, 4.);
		}
	};
}
