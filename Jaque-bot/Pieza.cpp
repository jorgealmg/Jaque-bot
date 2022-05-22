#include "Pieza.h"
 
char Pieza::getColor() {
	cout << this->color << endl;
	return this->color;
}

char Pieza::getTipo() {
	cout << this->tipo << endl;
	return this->tipo;
}


bool Pieza::comerPeon(V2D origen, V2D destino) {
	V2D res = destino - origen;


	if (res.y == 1 && abs(res.x) == 1)
		return true;
	else
		return false;
}
