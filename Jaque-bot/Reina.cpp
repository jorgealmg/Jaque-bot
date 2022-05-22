#include "Reina.h"

void Reina::mueve() {}

bool Reina::movimientoValido(V2D origen, V2D destino) {

	V2D res = origen - destino;

	if (res.x == 0 && res.y != 0)
		return true;

	else if (res.x != 0 && res.y == 0)
		return true;

	else if (abs(res.x) == abs(res.y))
		return true;

	else 
		return false;
}

bool Reina::comerPeon(V2D origen, V2D destino)
{
	return false;
}


