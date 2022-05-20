#pragma once

#include "Pieza.h"
#include "Peon.h"
#include "Reina.h"
#include "Alfil.h"
#include "Rey.h"
#include "Caballo.h"
#include "Torre.h"
#include "Tablero.h"

class Regla
{
	static void comer(Peon& pe, Pieza& p);
	static void comer(Torre& t, Pieza& p);
	static void comer(Alfil& a, Pieza& p);
	static void comer(Caballo& c, Pieza& p);
	static void comer(Reina& r, Pieza& p);
	static void comer(Rey& ry, Pieza& p); // Jaque mate
	//static bool casillaocupada(int x, int y, Tablero& tab);
	static void borrarpieza(Pieza& p);

	static void jaque(Peon& pe, Rey& ry); //jaque
};
