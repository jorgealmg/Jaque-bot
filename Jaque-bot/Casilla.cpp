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

bool Casilla::casillaVacia() {

	return ocupacion;
}