#include "Casilla.h"

Casilla::Casilla()
{


}

void Casilla::setColor(bool c)
{

	color = c;



}

void Casilla::setPosReal(V2D p)
{
	PosReal.x = p.x;
	PosReal.y = p.y;
}

void Casilla::setPosicion(int l, int n)
{

	letra = l;
	numero = n;

}


void Casilla::setPieza(Pieza* pie, char tipo, char color)
{
	p = pie;
	tipo = p->tipo;
	color = p->color;

}

void Casilla::iniPieza(Pieza *p)
{
	this->p = p;
}

void Casilla::setPiezaVacia(char tipo)
{
	tipo = p->tipo;
}

Pieza* Casilla::getPieza() {
	return p;
}


bool Casilla::casillaVacia() {

	Pieza *pieza = getPieza();

	if (pieza->tipo == V)
		return true;
	else
		return false;
}


