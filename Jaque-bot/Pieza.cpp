#include "Pieza.h"
 
char Pieza::getColor() {
	cout << "color PIEZA" << endl;
	cout << color << endl;
	return color;
}

char Pieza::getTipo() {
	cout << "tipo PIEZA" << endl;
	cout << tipo << endl;
	return tipo;
}

bool Pieza::comerPeon(V2D origen, V2D destino) {
	V2D res = destino - origen;

	if (res.y == 1 && abs(res.x) == 1)
		return true;
	else
		return false;
}
