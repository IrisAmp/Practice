#include "Fraction.hpp"
#include "MathUtil.hpp"

#include <cmath>

namespace AmpLib 
{
	Fraction::Fraction()
		: _n(0l)
		, _d(1l)
	{
	}

	Fraction::Fraction(long n)
		: _n(n)
		, _d(1l)
	{
	}

	Fraction::Fraction(long n, long d)
		: _n(n)
		, _d(d)
	{
	}

	Fraction::Fraction(int n)
		: _n(n)
		, _d(1l)
	{
	}

	Fraction::Fraction(int n, int d)
		: _n(n)
		, _d(d)
	{
	}

	Fraction::Fraction(float real)
	{
		Fraction::setBySBTW(*this, real);
	}

	Fraction::Fraction(double real)
	{
		Fraction::setBySBTW(*this, real);
	}

	Fraction::operator int() const
	{
		return 0;
	}

	Fraction::operator long() const
	{
		return 0l;
	}

	Fraction::operator float() const
	{
		return 0.f;
	}

	Fraction::operator double() const
	{
		return 0.;
	}

	Fraction Fraction::operator-() const
	{
		return Fraction();
	}

	Fraction& Fraction::operator++()
	{
		return *this;
	}

	Fraction& Fraction::operator--()
	{
		return *this;
	}

	Fraction Fraction::operator++(int)
	{
		return Fraction();
	}

	Fraction Fraction::operator--(int)
	{
		return Fraction();
	}

	Fraction& Fraction::operator+=(const Fraction & rhs)
	{
		return *this;
	}

	Fraction& Fraction::operator-=(const Fraction & rhs)
	{
		return *this;
	}

	Fraction& Fraction::operator*=(const Fraction & rhs)
	{
		return *this;
	}

	Fraction& Fraction::operator/=(const Fraction & rhs)
	{
		return *this;
	}

	void Fraction::numerator(long n)
	{
		this->_n = n;
		this->reduce();
	}

	long Fraction::numerator() const
	{
		return _n;
	}

	void Fraction::denominator(long d)
	{
		this->_d = d;
		this->reduce();
	}

	long Fraction::denominator() const
	{
		return _d;
	}

	void Fraction::setBySBTW(Fraction &f, double real)
	{
		const unsigned int maxiter = 65536;
		const double epsilon = 0.0000152587890625;

		long sign = AmpLib::sgn<double>(real);
		real = fabs(real);
		long integral = static_cast<long>(real);
		double target = real - integral;

		Fraction lower(0l, 1l);
		Fraction upper(1l, 1l);

		unsigned int iter = 0;
		while (iter < maxiter && fabs((double) f - target) > epsilon)
		{
			f._n = lower._n + upper._n;
			f._d = lower._d + upper._d;
			++iter;
		}

		f.reduce();
	}

	void Fraction::reduce()
	{
	}
}
