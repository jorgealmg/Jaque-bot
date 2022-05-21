#include "Peon.h"

void Peon::mueve() {}

bool Peon::movimientoValido(V2D origen, V2D destino) {

	V2D res = destino;

	if (origen.x == 1 || origen.x == 6)
	{
		if ((res.y == 2 && res.x == 0) || (res.y == 1 && res.x == 0))
			return true;
		else
			return false;
	}
	else
		if (res.y == 1 && res.x == 0)
			return true;
		else 
			return false;

}


bool Peon::comerPeon(V2D origen, V2D destino) {
	V2D res = destino - origen;

	if (res.y == 1 && abs(res.x) == 1)
		return true;
	else 
		return false;
}