#include "Rey.h"

void Rey::mueve() {}

void Rey::atacado(V2D*soyAtacado)
{
	V2D zona = getPosicion();
	for (int i = 0; i < 8; i++) {
		soyAtacado[i] = (zona.x, i);
	}
	for (int i = 0; i < 8; i++) {
		soyAtacado[i+8] = (i, zona.y);
	}
	
	int aux = 0;
	for (int i = zona.x + 1, j = zona.y - 1; (i < 8 && j >= 0); i++, j--) {
		soyAtacado[16 + aux] = (i, j);
		aux++;
	}

	for (int i = zona.x - 1, j = zona.y + 1; (i >= 0 && j < 8); i--, j++) {
		soyAtacado[16+aux] = (i, j);
		aux++;
	}

	for (int i = zona.x + 1, j = zona.y + 1; (i < 8 && j <= 0); i++, j++) {
		soyAtacado[15+aux] = (i, j);
		aux++;
	}

	for (int i = zona.x - 1, j = zona.y - 1; (i >= 0 && j >= 0); i--, j--) {
		soyAtacado[16+aux] = (i, j);
		aux++;
	}
}

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
