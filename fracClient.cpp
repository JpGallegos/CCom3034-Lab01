#include "frac.h"
#include <iostream>
using namespace std;

int main() {
	// Paso 1
	Fraction frac1 = Fraction();

	cout<<"The numerator for a default fraction is: "<< frac1.getNum()<< "\n";
	cout<<"The denominator for a default fraction is: "<< frac1.getDenom()<< "\n";

	// Paso 2
	cout<< "The addition of sums with equal denominators: \n";
	Fraction frac2 = Fraction(4,2);
	cout<< "The first fraction is: ";
	frac2.print();

	cout<<"The second fraction is: ";
	Fraction frac3 = Fraction(5, 2);
	frac3.print();
	cout<<"The sum of the two fractions is: ";
	Fraction fracSum = frac2.add(frac3);
	fracSum.print();

	cout<< "The sum of two fractions with different denominators is: \n";
	cout<< "The first fraction is: ";
	Fraction frac4 = Fraction(9, 3);
	frac4.print();
	cout<< "The second fraction is: ";
	Fraction frac5 = Fraction(5, 2);
	frac5.print();
	cout<< "The sum of the two fractions is: ";
	Fraction fracSum2 = frac4.add(frac5);
	fracSum2.print();

	

	return 1;
}
