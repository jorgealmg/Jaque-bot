#include "Coordinador.h"

Coordinador::Coordinador()
{
	estado = INICIO;
}

void Coordinador::teclaEspecial(unsigned char key)
{
}

void Coordinador::tecla(unsigned char key)
{
	if (estado == INICIO) {
		if (key == '1') {
			mundo.inicializa();
			estado = JvJ;
		}
		else if (key == '2') {

		}
		else if (key == 's' || key == 'S') {
			exit(0);
		}
	}
	else if (estado == JvJ) {
		mundo.tecla(key);
		if (key == 's' || key == 'S') {
			exit(0);
		}
	}
}

void Coordinador::mueve()
{

}

void Coordinador::dibuja()
{
	ETSIDI::setTextColor(1, 1, 0);
	ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
	ETSIDI::printxy("Ajedrez", -10, 11);
	ETSIDI::setTextColor(1, 1, 0);
	ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
	ETSIDI::printxy("Alberto Vicente", -10, 10.4);

	if (estado == INICIO) {
		mundo.dibuja();
		PIN.dibuja();
	}
	else if (estado == JvJ) {
		mundo.dibuja();
		tablero.dibuja();
	}

}
