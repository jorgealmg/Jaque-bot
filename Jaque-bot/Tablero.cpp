#include "Tablero.h"

Tablero::Tablero() :tablero0("tablero0.png", 1, 1, 220)
{
	setLado(10);
	tablero0.setCenter(0.0, 0.0);
	tablero0.setSize(lado, lado);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((j % 2) == 0 && (i % 2) == 0)
			{
				Tab[i][j].setColor(0);
				Tab[i][j].PosReal.x = -4.2 + (i * 1.2);
				Tab[i][j].PosReal.y = 4.2 - (j * 1.2);
				Tab[i][j].setPosicion(i, j);
			}

			else if ((j % 2) != 0 && (i % 2) == 0)
			{
				Tab[i][j].setColor(1);
				Tab[i][j].PosReal.x = -4.2 + (i * 1.2);
				Tab[i][j].PosReal.y = 4.2 - (j * 1.2);
				Tab[i][j].setPosicion(i, j);
			}

			else if ((j % 2) == 0 && (i % 2) != 0)
			{
				Tab[i][j].setColor(1);
				Tab[i][j].PosReal.x = -4.2 + (i * 1.2);
				Tab[i][j].PosReal.y = 4.2 - (j * 1.2);
				Tab[i][j].setPosicion(i, j);
			}

			else if ((j % 2) != 0 && (i % 2) != 0)
			{
				Tab[i][j].setColor(0);
				Tab[i][j].PosReal.x = -4.2 + (i * 1.2);
				Tab[i][j].PosReal.y = 4.2 - (j * 1.2);
				Tab[i][j].setPosicion(i, j);
			}


		}

	}

}

void Tablero::setLado(float l)
{
	lado = l;
}

void Tablero::dibuja()
{
	glPushMatrix();
	glTranslatef(-5.0f, -5.0f, 0);


	tablero0.flip(false, false);

	tablero0.draw();

	glTranslatef(5.0f, 5.0f, 0);
	glPopMatrix();


}


Casilla* Tablero::getCasilla(V2D pos) {

	return &Tab[pos.x][pos.y];
}


bool Tablero::obstaculo(V2D origen, V2D destino) {

	int ocupacion = 0;

	for (int i = origen.x; i < destino.x; i++) {
		for (int j = origen.y; j < destino.y; j++) {
			V2D v;
			v.x = i;
			v.y = j;

			Casilla* c;
			c = getCasilla(v);
			if (c->casillaVacia() == false)
				ocupacion++;
		}
	}

	if (ocupacion >= 1)
		return true;
	else
		return false;
}

void Tablero::Mueve(Casilla *origen,Casilla* destino) {
	if ((origen->p->movimientoValido(origen->PosReal, destino->PosReal) == 1) && obstaculo(origen->p->pos, destino->p->pos) != 0) {
		destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
		origen->setPiezaVacia(V);
	}
}