// ==========================================================================
// Author  : John P. Gallegos 
// Est. No : 801-06-2608
// Email   : sylladie@gmail.com
// ===========================================================================

#include <iostream>
using namespace std;

#ifndef FRAC_H
#define FRAC_H

class Fraction {
	private:
		int num, denom;
	public:
		Fraction();
		Fraction(int n, int d);

		int fracGCD();

		void setNum(int n);
		void setDenom(int d);

		int getNum() const;
		int getDenom() const;

		void print(ostream & out) const;
		
		Fraction add(const Fraction& F) const; 
		Fraction sub(const Fraction& F) const;
		Fraction mult(const Fraction& F) const;
		Fraction div(const Fraction& F) const;
		bool     gt(const Fraction& F) const;
        bool     lt(const Fraction& F) const;
		void     reduce();
};

ostream & operator<<(ostream & out, const Fraction & frac);

#endif
