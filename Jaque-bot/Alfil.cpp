#include "Alfil.h"


void Alfil::mueve() {}

bool Alfil::movimientoValido(V2D origen, V2D destino) {

	V2D res = origen - destino;

	if (abs(res.x) == abs(res.y))
		return true;
	else
		return false;

}

bool Alfil::comerPeon(V2D origen, V2D destino) { return false; }

