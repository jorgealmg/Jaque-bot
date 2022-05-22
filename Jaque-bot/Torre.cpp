#include "Torre.h"

void Torre::mueve() {}


bool Torre::movimientoValido(V2D origen, V2D destino) {
	
	V2D res = origen - destino;

	if (res.x == 0 && res.y != 0)
		return true;
	if (res.y == 0 && res.x != 0)
		return true;
	else return false;

}


