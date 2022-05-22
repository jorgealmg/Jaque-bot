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
	static void comer(Peon& pe, Pieza& p);  //borrar todas las comer, hay una funcion general en tablero
	static void comer(Torre& t, Pieza& p);
	static void comer(Alfil& a, Pieza& p);
	static void comer(Caballo& c, Pieza& p);
	static void comer(Reina& r, Pieza& p);
	static void comer(Rey& ry, Pieza& p); // Jaque mate
	//static bool casillaocupada(int x, int y, Tablero& tab);
	static void borrarpieza(Pieza& p);

	static bool jaque(Rey& ry, Pieza& p); //jaque
	static bool jaqueReal(Rey& ry, Pieza& p);
	static bool enroqueCorto(Rey& ry, Torre& t);
	static bool enroqueLargo(Rey& ry, Torre& t);
};
