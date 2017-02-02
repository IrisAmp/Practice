#include "CppUnitTest.h"
#include "Fraction.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace AmpLib;

namespace AmpTest
{
	TEST_CLASS(FractionTest)
	{
	public:
		TEST_METHOD(TestConstructorDefault)
		{
			Fraction a;
			Assert::AreEqual(0l, a.numerator());
			Assert::AreEqual(1l, a.denominator());
		}
		TEST_METHOD(TestConstructorInt)
		{
			Fraction a(1);
			Assert::AreEqual(1l, a.numerator());
			Assert::AreEqual(1l, a.denominator());

			Fraction b(3, 2);
			Assert::AreEqual(3l, b.numerator());
			Assert::AreEqual(2l, b.denominator());
		}
		TEST_METHOD(TestConstructorLong)
		{
			Fraction a(1l);
			Assert::AreEqual(1l, a.numerator());
			Assert::AreEqual(1l, a.denominator());

			Fraction b(3l, 2l);
			Assert::AreEqual(3l, b.numerator());
			Assert::AreEqual(2l, b.denominator());
		}
		TEST_METHOD(TestConstructorFloat)
		{
			Fraction a(.5f);
			Assert::AreEqual(1l, a.numerator());
			Assert::AreEqual(2l, a.denominator());

			Fraction b(.333333333f);
			Assert::AreEqual(1l, b.numerator());
			Assert::AreEqual(3l, b.denominator());

			Fraction c(0.3f);
			Assert::AreEqual(3l,  c.numerator());
			Assert::AreEqual(10l, c.denominator());

			Fraction d(3.5f);
			Assert::AreEqual(7l, d.numerator());
			Assert::AreEqual(2l, d.denominator());
		}
		TEST_METHOD(TestConstructorDouble)
		{
		}
	};
}