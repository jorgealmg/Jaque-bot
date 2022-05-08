#include "ModosJuego.h"

void ModosJuego::setTurno(bool t)
{
	turno = t;
}

void ModosJuego::setMode(int m)
{
	mode = m;
}

bool ModosJuego::getTurno()
{
	return turno;
}

int ModosJuego::getMode()
{
	return mode;
}
