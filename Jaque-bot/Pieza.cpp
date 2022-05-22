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

bool Pieza::comerPeon(V2D origen, V2D destino, Pieza *p) {
	V2D res = destino - origen;
	if (p->getColor() == 'B') {
		if (res.y == 1 && abs(res.x) == 1)
			return true;
		else
			return false;
	}
	if (p->getColor() == 'N') {
		if (res.y == -1 && abs(res.x) == 1)
			return true;
		else
			return false;
	}
}
