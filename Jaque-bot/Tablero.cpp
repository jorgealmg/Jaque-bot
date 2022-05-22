#include "Tablero.h"

Tablero::Tablero() :tablero0("tablero0.png", 1, 1, 220)
{
	setLado(10);
	tablero0.setCenter(0.0, 0.0);
	tablero0.setSize(lado, lado);
	movimiento = 0;

	for (int i = 0; i < 8;i++)
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


void Tablero::inicializa(){

	Tab[0][0].setPieza(Tab[0][0].p, T, B);
	Tab[7][0].setPieza(Tab[7][0].p, T, B);
	Tab[1][0].setPieza(Tab[1][0].p, C, B);
	Tab[6][0].setPieza(Tab[6][0].p, C, B);
	Tab[2][0].setPieza(Tab[2][0].p, A, B);
	Tab[5][0].setPieza(Tab[5][0].p, A, B);
	Tab[3][0].setPieza(Tab[3][0].p, K, B);
	Tab[4][0].setPieza(Tab[4][0].p, Q, B);

	
	Tab[0][7].setPieza(Tab[0][7].p, T, N);
	Tab[7][7].setPieza(Tab[7][7].p, T, N);
	Tab[1][7].setPieza(Tab[1][7].p, C, N);
	Tab[6][7].setPieza(Tab[6][7].p, C, N);
	Tab[2][7].setPieza(Tab[2][7].p, A, N);
	Tab[5][7].setPieza(Tab[5][7].p, A, N);
	Tab[3][7].setPieza(Tab[3][7].p, K, N);
	Tab[4][7].setPieza(Tab[4][7].p, Q, N);

	for (int i = 1; i < 8; i++) {  //X
		for (int j = 1; j < 8; j++) { //Y
			
			if (j == 1)
				Tab[i][j].setPieza(Tab[i][j].p, P, B);
			else if (j == 6)
				Tab[i][j].setPieza(Tab[i][j].p, P, N);
			else
				Tab[i][j].setPiezaVacia(V);
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

	V2D res = origen - destino;
	int ocupacion = 0;
	if ((abs(res.x)==abs(res.y)) && (origen.x < destino.x) && (origen.y < destino.y)) {
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

	else if ((abs(res.x) == abs(res.y)) && (origen.x > destino.x) && (origen.y > destino.y)) {

		for (int i = origen.x; i > destino.x; i--) {
			for (int j = origen.y; j > destino.y; j--) {
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

	else if ((abs(res.x) == abs(res.y)) && (origen.x > destino.x) && (origen.y < destino.y)) {
		for (int i = origen.x; i > destino.x; i--) {
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

	else if ((abs(res.x) == abs(res.y)) && (origen.x < destino.x) && (origen.y > destino.y)) {
		for (int i = origen.x; i < destino.x; i++) {
			for (int j = origen.y; j > destino.y; j--) {
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
	else if ((origen.x == destino.x) && (origen.y < destino.y)) {
		
		for (int j = origen.y; j < destino.y; j++) {
			V2D v;
			v.x = origen.x;
			v.y = j;

			Casilla* c;
			c = getCasilla(v);
			if (c->casillaVacia() == false)
				ocupacion++;
		}
		
		if (ocupacion >= 1)
			return true;
		else
			return false;
	}

	else if ((origen.x == destino.x) && (origen.y > destino.y)) {

		for (int j = origen.y; j > destino.y; j--) {
			V2D v;
			v.x = origen.x;
			v.y = j;

			Casilla* c;
			c = getCasilla(v);
			if (c->casillaVacia() == false)
				ocupacion++;
		}

		if (ocupacion >= 1)
			return true;
		else
			return false;
	}

	else if ((origen.x < destino.x) && (origen.y == destino.y)) {
		for (int i = origen.x; i < destino.x; i++) {
			
			V2D v;
			v.x = i;
			v.y = origen.y;

			Casilla* c;
			c = getCasilla(v);
			if (c->casillaVacia() == false)
				ocupacion++;
			
		}

		if (ocupacion >= 1)
			return true;
		else
			return false;
	}

	else if ((origen.x > destino.x) && (origen.y == destino.y)) {
		for (int i = origen.x; i > destino.x; i--) {

			V2D v;
			v.x = i;
			v.y = origen.y;

			Casilla* c;
			c = getCasilla(v);
			if (c->casillaVacia() == false)
				ocupacion++;

		}

		if (ocupacion >= 1)
			return true;
		else
			return false;
	}

	else
	return false; //es un caballo


}

void Tablero::Mueve(Casilla *origen,Casilla* destino) {

	if (origen->p->getTipo() != P) {
		if ((origen->p->movimientoValido(origen->PosReal, destino->PosReal) == true) && obstaculo(origen->p->pos, destino->p->pos) == false) {
			if (destino->casillaVacia() == false)
				comerPieza(origen, destino);
			else {
				destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
				origen->setPiezaVacia(V);
			}
		}
	}

	else if (origen->p->getTipo() == P) {
		if (origen->p->comerPeon(origen->PosReal, destino->PosReal) == true) {
			if (destino->casillaVacia() == false) {
				comerPieza(origen, destino);
				if (origen->p->getColor() == B && destino->PosReal.y == 7)  //coronar
					coronar(destino);
				else if (origen->p->getColor() == N && destino->PosReal.y == 0)
					coronar(destino);
				}
			}
		}

		else if (origen->p->movimientoValido(origen->PosReal, destino->PosReal) == true  && obstaculo(origen->p->pos, destino->p->pos) == false){
			if (destino->casillaVacia() == true) {
				destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
				origen->setPiezaVacia(V);
				if (origen->p->getColor() == B && destino->PosReal.y == 7)  //coronar
					coronar(destino);
				else if (origen->p->getColor() == N && destino->PosReal.y == 0)
					coronar(destino);
			}
	}

}

void Tablero::coronar(Casilla* c) {
	cout << "Has coronado. Pulsa en mayúsculas la incial de la pieza que quieras" << endl;
	char letra;
	cin >> letra;
	switch (letra) {
	case 'R':
		c->setPieza(c->p, Q, c->p->color);
	case 'A':
		c->setPieza(c->p, A, c->p->color);
	case 'T':
		c->setPieza(c->p, T, c->p->color);
	case 'C':
		c->setPieza(c->p, C, c->p->color);
	}
}

void Tablero::comerPieza(Casilla* origen, Casilla* destino)
{
	ETSIDI::play("sonidos/muerte.wav");
	delete& destino->p;
	destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
	origen->setPiezaVacia(V);
}


bool Tablero::setTurno(int *movimiento, Casilla * origen) {

	if ((*movimiento % 2 == 0) && origen->p->getColor() == N)  //mueven negras
		return true;
	else if ((*movimiento % 2 != 0) && origen->p->getColor() == B) //mueven blancas
		return true;
	else return false;

}

void Tablero::hacerMovimiento(Casilla* origen, Casilla* destino) {
	if (setTurno(&movimiento, origen)) {
		Mueve(origen, destino);
		ETSIDI::play("sonidos/chess.wav");
		movimiento++;
	}
	else
		cout << "movimiento incorrecto" << endl;
}