#include "Pieza.h"
 
char Pieza::getColor() {
	return color;
}

char Pieza::getTipo() {
	return tipo;
}


bool Pieza::comerPeon(V2D origen, V2D destino) {
	V2D res = destino - origen;


	if (res.y == 1 && abs(res.x) == 1)
		return true;
	else
		return false;
}
