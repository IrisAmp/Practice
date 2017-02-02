#include "CppUnitTest.h"
#include "MathUtil.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AmpTest
{
	TEST_CLASS(MathUtilTest)
	{
	public:
		TEST_METHOD(gcd)
		{
			Assert::AreEqual(0ul, AmpLib::gcd(0ul, 0ul));
			Assert::AreEqual(1ul, AmpLib::gcd(1ul, 1ul));
			Assert::AreEqual(0ul, AmpLib::gcd(2ul, 2ul));
			Assert::AreEqual(0ul, AmpLib::gcd(2ul, 0ul));
			Assert::AreEqual(0ul, AmpLib::gcd(0ul, 0ul));
			Assert::AreEqual(0ul, AmpLib::gcd(0ul, 0ul));
		}
	};
}