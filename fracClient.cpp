// ==========================================================================
// Author  : John P. Gallegos 
// Est. No : 801-06-2608
// Email   : sylladie@gmail.com
// 
// Descripcion: Este programa crea objetos de tipo Fraction con valores
//              aleatorios entre 1 y 9. Los suma, resta, multiplica, divide,
//              compara, y imprime los resultados.
//              Finalmente, crea un arreglo de 10 objetos Fraction con 
//              valores aleatorios y, utilizando funciones, devuelve el 
//              resultado de la sumatoria de los elementos, y ordena el 
//              arreglo.
//
// ===========================================================================

#include "frac.h"
#include <iostream>
#include <stdlib.h>   // srand(), rand(), time()
#include <algorithm>
using namespace std;

Fraction fracSumation(Fraction *fracArray, int size);
void fracArrayOrder(Fraction *fracArray, int size); 
void printFracArray(Fraction *fracArray, int size);

int main() {
    srand(time(NULL));
	// Paso 1
	Fraction frac1 = Fraction();

	cout<<"The numerator for a default fraction is: "<< frac1.getNum()<< "\n";
	cout<<"The denominator for a default fraction is: "<< frac1.getDenom()<< "\n";

	// // Paso 2
	Fraction frac2 = Fraction(rand()%9+1,rand()%9+1);
    Fraction frac3 = Fraction(rand()%9+1, rand()%9+1);
    Fraction frac4 = Fraction(rand()%9+1, rand()%9+1);
    Fraction frac5 = Fraction(rand()%9+1, rand()%9+1);

    Fraction fracResult = frac2.add(frac3);
	cout<< "\t"<< frac2<< " + "<< frac3<< " = "<< fracResult;
    fracResult.reduce();
    cout<< " = "<< fracResult<< "\n";

    fracResult = frac4.mult(frac5);
    cout<< "\t"<< frac4<< " * "<< frac5<< " = "<< fracResult;
    fracResult.reduce();
    cout<< " = "<< fracResult<< "\n";

    fracResult = frac5.div(frac3);
	cout<< "\t"<< frac5<< " div "<< frac3<< " = "<< fracResult;
    fracResult.reduce();
    cout<< " = "<< fracResult<< '\n';

	if (fracResult.gt(frac2)){
		cout<<"\t"<< fracResult<< " is greater than "<< frac2<<"\n";
	} else {
		cout<<"\t"<< frac2<< " is greater than "<< fracResult<<"\n";
	}

    Fraction fracArray[10];

    cout<< "For Fraction array: ";
    for (int i=0; i<10; i++) {
        fracArray[i] = Fraction(rand()%9+1, rand()%9+1);
    } 
    printFracArray(fracArray, 10);
    cout<< "\nThe ordered list is: ";
    fracArrayOrder(fracArray, 10);
    printFracArray(fracArray, 10);
    cout<<" and "<< fracSumation(fracArray, 10) << " is the sumation.\n";

	return 1;
}

Fraction fracSumation(Fraction *fracArray, int size) {
    Fraction result = fracArray[0];

    for (int i=1; i<size; i++) {
        result = result.add(fracArray[i]);
        result.reduce();
    }

    return result;
}

void fracArrayOrder(Fraction *fracArray, int size) {

    for (int startIdx=0; startIdx<size; startIdx++) {
        int smallestPosIdx = startIdx;

        for (int currentIdx = startIdx + 1; currentIdx<size; currentIdx++){
            if (fracArray[currentIdx].lt(fracArray[smallestPosIdx])) {
                smallestPosIdx = currentIdx;
            }
        }
        swap(fracArray[startIdx], fracArray[smallestPosIdx]);
    }
}

void printFracArray(Fraction *fracArray, int size) {
    cout<<"["<< fracArray[0];
    for (int j=1; j<10; j++){
        cout<<", "<< fracArray[j];
    }
    cout<<"]";
}