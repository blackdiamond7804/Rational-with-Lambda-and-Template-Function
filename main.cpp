#include "Racional.h"

int main() {
	Racional<int> r1(3, 4);
	Racional <int> r2(5, 6);

	r1.imprimirObj();
	r2.imprimirObj();

	Racional<int> suma = r1.suma(r2);
	Racional<int> resta = r1.resta(r2);
	Racional<int> multiplicacion = r1.multiplicacion(r2);
	Racional<int> division = r1.division(r2);

	cout << "Suma: ";
	suma.imprimirObj();
	cout << "Resta:";
	resta.imprimirObj();
	cout << "Multiplicacion: ";
	multiplicacion.imprimirObj();
	cout << "Division";
	division.imprimirObj();

	return 0;
}