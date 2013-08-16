#include "frac.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
	num = 0;
	denom = 1;
}

Fraction::Fraction(int n, int d) {
	num = n;
	denom = d;
}

void Fraction::setNum(int n) {
	num = n;
}

void Fraction::setDenom(int d) {
	denom = d;
}

int Fraction::getNum()const {
	return num;
}

int Fraction::getDenom()const {
	return denom;
}

void Fraction::print()const {
	cout<< "Num is: "<< this->num<< "\n";
	cout<< "Denom is: "<< this->denom<< "\n";
}  

Fraction Fraction::add(const Fraction& F)const {
	Fraction tempFrac = Fraction();

	int localNum = this->num;
	int otherNum = F.getNum();

	int localDenom = this->denom;
	int otherDenom = F.getDenom();

	// Case 1: local and other denom are equal.
	if (localDenom == otherDenom) { // the same if (this->denom == F.getDenom())
		tempFrac.setNum(localNum+otherNum);
		tempFrac.setDenom(localDenom);
	} else if (localDenom != otherDenom) {
		tempFrac.setNum((localNum*otherDenom)+(otherNum*localDenom));
		tempFrac.setDenom(localDenom*otherDenom);
	}

	return tempFrac;
}

Fraction Fraction::sub(const Fraction& F)const {
	Fraction tempFrac = Fraction();

	int localNum = this->num;
	int otherNum = F.getNum();

	int localDenom = this->num;
	int otherDenom = F.getDenom();
}

Fraction Fraction::mult(const Fraction& F)const {}
Fraction Fraction::div(const Fraction& F)const {}
bool     Fraction::gt(const Fraction& F)const {}
Fraction Fraction::reduce() {}
