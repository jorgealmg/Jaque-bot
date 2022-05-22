#include "Caballo.h"

void Caballo::mueve() {}



bool Caballo :: movimientoValido(V2D origen, V2D destino) {
	V2D res = origen - destino;
	if (abs(res.x) == 2 && abs(res.y) == 1)
		return true;
	else if (abs(res.y == 2) && abs(res.x == 1))
		return true;
	else
		return false;
}

bool Caballo::comerPeon(V2D origen, V2D destino) { return false; }

