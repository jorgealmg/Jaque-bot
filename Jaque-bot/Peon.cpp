#include "Peon.h"

void Peon::mueve() {}

<<<<<<< HEAD
bool Peon::movimientoValido(V2D origen, V2D destino)
{
	return false;
}
=======
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


bool Peon::comerPeon(V2D origen, V2D destino) {
	V2D res = destino - origen;

	if (res.y == 1 && abs(res.x) == 1)
		return true;
	else 
		return false;
}
>>>>>>> 7deea661c839c7184b32834cd041f06e4837871b
