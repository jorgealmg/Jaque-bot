#include "Pieza.h"
 
color Pieza::getColor() {
	cout << color << endl;
	return color;
}

tipo Pieza::getTipo() {
	cout << tipo << endl;
	return tipo;
}


bool Pieza::movimientoValido(V2D origen, V2D destino)
{
	return false;
}

bool Pieza::comerPeon(V2D origen, V2D destino, Pieza *p) {
	V2D res = destino - origen;
	if (p->getColor() == B) {
		if (res.y == 1 && abs(res.x) == 1)
			return true;
		else
			return false;
	}
	if (p->getColor() == N) {
		if (res.y == -1 && abs(res.x) == 1)
			return true;
		else
			return false;
	}
}
