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
	cout<< "\tThe first fraction is: ";
	frac2.print();

	cout<<"\n\tThe second fraction is: ";
	Fraction frac3 = Fraction(5, 2);
	frac3.print();
	cout<<"\n\tThe sum of the two fractions is: ";
	Fraction fracSum = frac2.add(frac3);
	fracSum.print();

	cout<< "\nThe sum of two fractions with different denominators: \n";
	cout<< "\tThe first fraction is: ";
	Fraction frac4 = Fraction(9, 3);
	frac4.print();
	cout<< "\n\tThe second fraction is: ";
	Fraction frac5 = Fraction(5, 2);
	frac5.print();
	cout<< "\n\tThe sum of the two fractions is: ";
	Fraction fracSum2 = frac4.add(frac5);
	fracSum2.print();

	cout<< "\nThe product of two fractions: \n";
	cout<< "\tThe first fraction is: ";
	frac4.print();
	cout<< "\n\tThe second fraction is: ";
	frac2.print();
	fracSum = frac4.mult(frac2);
	cout<< "\n\tThe product of the two fractions is: ";
	fracSum.print();

	cout<< "\nThe division of two fractions: \n";
	cout<< "\tThe first fraction is: ";
	frac5.print();
	cout<< "\n\tThe second fraction is: ";
	frac4.print();
	fracSum = frac5.div(frac4);
	cout<< "\n\tThe quotient of the two fractions is: ";
	fracSum.print();

	cout<< "\nGiven two fractions: "; fracSum.print(); cout<< " and "; fracSum2.print(); cout<< ": \n";
	if (fracSum.gt(fracSum2)){
		fracSum.print(); cout<< " is greater.\n";
	} else {
		fracSum2.print(); cout<< " is greater.\n";
	}

	return 1;
}
