#include "frac.h"
#include <iostream>
using namespace std;

int gcd(int x, int y) {

	// cout<< "\nThe greatest common divsor of "<<n<<" and "<<m<< " is ";
	if (y == 0) { 
		// cout<< n<< "\n";
		return x;
	}else 
		return gcd(y, x%y);
}


Fraction::Fraction() {
	num = 0;
	denom = 1;
}

Fraction::Fraction(int n, int d) {
	num = n;
	denom = d;
}

int Fraction::fracGCD(){
	// For the gcd(x, y) to work, x >= y, y >= 0
	int x = (num >= denom) ? num: denom;
	int y = (num < denom) ? num: denom;

	int result = gcd(x, y);
	return result;
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

void Fraction::print(ostream & out)const {
	out<< num<< "/"<< denom;
}  

//--- Definition of output operator 
ostream & operator<< (ostream & out, const Fraction & frac)
{  
   frac.print(out); 
   return out;  
}

Fraction Fraction::add(const Fraction& F)const {
	Fraction result = Fraction();

	int localNum = this->num;
	int otherNum = F.getNum();

	int localDenom = this->denom;
	int otherDenom = F.getDenom();

	// Case 1: local and other denom are equal.
	if (localDenom == otherDenom) { // the same if (this->denom == F.getDenom())
		result.setNum(localNum+otherNum);
		result.setDenom(localDenom);
	} else if (localDenom != otherDenom) {
		result.setNum((localNum*otherDenom)+(otherNum*localDenom));
		result.setDenom(localDenom*otherDenom);
	}

	return result;
}

Fraction Fraction::sub(const Fraction& F)const {
	Fraction result = Fraction();

	int localNum = this->num;
	int otherNum = F.getNum();

	int localDenom = this->num;
	int otherDenom = F.getDenom();

	if (localDenom == otherDenom){
		result.setNum(localNum-otherNum);
		result.setDenom(localDenom);
	} else if (localDenom != otherDenom){
		result.setNum((localNum*otherDenom) - (otherNum*localDenom));
		result.setDenom(localDenom*otherDenom);
	}

	return result;
}

Fraction Fraction::mult(const Fraction& F)const {
	Fraction product = Fraction(this->num * F.getNum(), this->denom * F.getDenom());
	return product;
}

Fraction Fraction::div(const Fraction& F)const {
	Fraction result = Fraction(this->num * F.getDenom(), this->denom * F.getNum());
	return result;
}

bool     Fraction::gt(const Fraction& F)const {
	return (float(this->num/this->denom) > float(F.getNum()/F.getDenom()));
}
void Fraction::reduce() {
	int commonDivisor = this->fracGCD();
	if (commonDivisor > 1) {
		this->num = num/commonDivisor;
		this->denom = denom/commonDivisor;
	} 
}
