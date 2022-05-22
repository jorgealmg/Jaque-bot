#include "Regla.h"


bool Regla::jaque(Rey& ry, Pieza& p)
{
	int difx = abs(p.pos.x - ry.pos.x);
	int dify = abs(p.pos.y - ry.pos.y);

	if (ry.getColor() != p.getColor()) {
		if (p.getTipo() == 'P' && ((p.pos.x == ry.pos.x + 1 && p.pos.y == ry.pos.y + 1) || (p.pos.x == ry.pos.x + 1 && p.pos.y == ry.pos.y - 1) ||
			(p.pos.x == ry.pos.x - 1 && p.pos.y == ry.pos.y + 1) || (p.pos.x == ry.pos.x - 1 && p.pos.y == ry.pos.y - 1))) return true; //jaque con el peon
		else if (p.getTipo() == 'T' && (p.pos.x == ry.pos.x || p.pos.y == ry.pos.y)) return true; // jaque con la torre
		else if (p.getTipo() == 'A' && difx == dify) return true; // jaque con el alfil
		else if (p.getTipo() == 'Q' && (difx == dify || p.pos.x == ry.pos.x || p.pos.y == ry.pos.y)) return true; //jaque con la dama
		else if (p.getTipo() == 'C' && ((difx == 2 && dify == 1)|| (difx == 1 && dify == 2))) return true; //jaque con el caballo
	}
}

bool Regla::jaqueReal(Rey& ry, Pieza& p)
{
	Tablero t;
	if (jaque(ry, p) && t.obstaculo(ry.pos, p.pos) == false) cout << "Jaque" << endl; return true;
}

bool Regla::enroqueCorto(Rey& ry, Torre& t)
{
	Tablero ta;
	if (ry.getColor() == t.getColor() == 'B') {
		if (ry.pos == (3, 0) && t.pos == (6, 0) && ta.obstaculo(ry.pos, t.pos) == false) return true; // se puede enrocar
	}
	else if (ry.getColor() == t.getColor() == 'N') {
		if (ry.pos == (3, 7) && t.pos == (6, 7) && ta.obstaculo(ry.pos, t.pos) == false) return true; //se puede enrocar
	}
}

bool Regla::enroqueLargo(Rey& ry, Torre& t)
{
	Tablero ta;
	if (ry.getColor() == t.getColor() == 'B') {
		if (ry.pos == (3, 0) && t.pos == (0, 0) && ta.obstaculo(ry.pos, t.pos) == false) return true; // se puede enrocar
	}
	else if (ry.getColor() == t.getColor() == 'N') {
		if (ry.pos == (3, 7) && t.pos == (0, 7) && ta.obstaculo(ry.pos, t.pos) == false) return true; //se puede enrocar
	}
}



/*bool Regla::casillaocupada(int x, int y, Tablero& tab) {
	if (tab[x][y] == '') return true;
	else return false;
}*/

void Regla::borrarpieza(Pieza& p) {
	delete& p;
}

