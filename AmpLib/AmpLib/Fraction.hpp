#ifndef __FRACTION_H_DEFINED__
#define __FRACTION_H_DEFINED__

namespace AmpLib 
{
	class Fraction
	{
	public:
		Fraction();
		Fraction(int n);
		Fraction(int n, int d);
		Fraction(long n);
		Fraction(long n, long d);
		Fraction(float real);
		Fraction(double real);

		operator int() const;
		operator long() const;
		operator float() const;
		operator double() const;

		Fraction  operator-() const;
		Fraction& operator++();
		Fraction& operator--();
		Fraction  operator++(int);
		Fraction  operator--(int);
		Fraction& operator+=(const Fraction& rhs);
		Fraction& operator-=(const Fraction& rhs);
		Fraction& operator*=(const Fraction& rhs);
		Fraction& operator/=(const Fraction& rhs);

		void numerator(long n);
		long numerator() const;
		void denominator(long d);
		long denominator() const;

	protected:
		static void setBySBTW(Fraction& f, double real);

	private:
		long _n;
		long _d;

		void reduce();
	};

	inline bool operator==(const Fraction& lhs, const Fraction& rhs)
	{
		// TODO
		return false;
	}
	inline bool operator< (const Fraction& lhs, const Fraction& rhs) 
	{
		// TODO
		return false;
	}
	inline bool operator!=(const Fraction& lhs, const Fraction& rhs) { return !operator==(lhs, rhs); }
	inline bool operator> (const Fraction& lhs, const Fraction& rhs) { return  operator< (rhs, lhs); }
	inline bool operator<=(const Fraction& lhs, const Fraction& rhs) { return !operator> (lhs, rhs); }
	inline bool operator>=(const Fraction& lhs, const Fraction& rhs) { return !operator< (lhs, rhs); }

	inline Fraction operator+(Fraction lhs, const Fraction& rhs) { lhs += rhs; return lhs; }
	inline Fraction operator-(Fraction lhs, const Fraction& rhs) { lhs -= rhs; return lhs; }
	inline Fraction operator*(Fraction lhs, const Fraction& rhs) { lhs *= rhs; return lhs; }
	inline Fraction operator/(Fraction lhs, const Fraction& rhs) { lhs /= rhs; return lhs; }
}

#endif//__FRACTION_H_DEFINED__
