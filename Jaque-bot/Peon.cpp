#include "Peon.h"

void Peon::mueve() {}

bool Peon::movimientoValido(V2D origen, V2D destino) {
	char color = getColor();

	V2D res = destino-origen;
	if (color == B) { //piezas blancas
		if (origen.x == 1) //posicion de salida de los peones
		{
			if ((res.y == 2 && res.x == 0) || (res.y == 1 && res.x == 0))
				return true;
			else
				return false;
		}
		else {  //posicion en el resto del tablero
			if (res.y == 1 && res.x == 0)
				return true;
			else
				return false;
		}
	}

	else { //piezas negras

		if (origen.x == 6)
		{
			if ((res.y == -2 && res.x == 0) || (res.y == -1 && res.x == 0)) //posicion de salida de los peones
				return true;
			else
				return false;
		}
		else {
			if (res.y == -1 && res.x == 0) //posicion en el resto del tablero
				return true;
			else
				return false;
		}
	}
}

