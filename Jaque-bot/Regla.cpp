#include "Regla.h"

void Regla::comer(Peon& pe, Pieza& p)
{
	if (pe.pos.x == p.pos.x && pe.pos.y == p.pos.y) p.getColor(); //Habria que sustituir getColor por una funcion que elemine la pieza
}

void Regla::comer(Torre& t, Pieza& p)
{
	if (t.pos.x == p.pos.x && t.pos.y == p.pos.y) p.getColor();
}

void Regla::comer(Alfil& a, Pieza& p)
{
	if (a.pos.x == p.pos.x && a.pos.y == p.pos.y) p.getColor();
}

void Regla::comer(Caballo& c, Pieza& p)
{
	if (c.pos.x == p.pos.x && c.pos.y == p.pos.y) p.getColor();
}

void Regla::comer(Reina& r, Pieza& p)
{
	if (r.pos.x == p.pos.x && r.pos.y == p.pos.y) p.getColor();
}

void Regla::comer(Rey& ry, Pieza& p)
{
	if (ry.pos.x == p.pos.x && ry.pos.y == p.pos.y) p.getColor();
}

void Regla::jaque(Peon& pe, Rey& ry)
{

}

void Regla::borrarpieza(Pieza& p) {
	delete& p;
}

