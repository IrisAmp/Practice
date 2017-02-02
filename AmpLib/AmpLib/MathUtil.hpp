#ifndef __MATH_UTIL_H_DEFINED__
#define __MATH_UTIL_H_DEFINED__

namespace AmpLib
{
	template <typename T> inline int sgn(T value)
	{
		return (T(0) < value) - (value < T(0));
	}

	unsigned long gcd(unsigned long u, unsigned long v);
}

#endif // !__MATH_UTIL_H_DEFINED
