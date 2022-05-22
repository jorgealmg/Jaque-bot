#include "Rey.h"


void Rey::mueve() {}

bool Rey::movimientoValido(V2D origen, V2D destino) {

	V2D res = origen - destino;

	if (abs(res.x) == 1 && res.y == 0)
		return true;
	else if (res.x == 0 && abs(res.y) == 1)
		return true;
	else if (abs(res.x) == abs(res.y))
		return true;
	else
		return false;

}

bool Rey::comerPeon(V2D origen, V2D destino)
{
	return false;
}
