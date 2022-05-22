#include "Tablero.h"

Tablero::Tablero() :tablero0("tablero0.png", 1, 1, 220)
{
	setLado(10);
	tablero0.setCenter(0.0, 0.0);
	tablero0.setSize(lado, lado);

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

	Rey R1(B);

	cout << "Soy antes de set" << endl;
	Tab[0][0].iniPieza(&R1);
	cout << "Soy despues de set" << endl;
	char color = R1.getColor();
	cout << color << endl;
	char tipo = R1.getTipo();
	cout << tipo << endl;

	/*Tab[7][0].setPieza(Tab[7][0].p, T, B);
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
	}*/
}

void Tablero::setLado(float l)
{
	lado = l;
}


void Tablero::dibuja()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			dibujaPiezas(i, j);
			//cout << "hola" << endl;
	}
	glEnable(GL_TEXTURE_2D);

	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("tablero0.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-5, -5, 0);
	glTexCoord2d(1, 0); glVertex3f(-5, 5, 0);
	glTexCoord2d(1, 1); glVertex3f(5, 5, 0);
	glTexCoord2d(0, 1); glVertex3f(5, -5, 0);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}

void Tablero::dibujaPiezas(int i, int j)
{
	cout << "prueba" << endl;
	char color = Tab[i][j].p->getColor();
	cout << color << endl;
	char tipo = Tab[i][j].p->getTipo();
	cout << tipo << endl;
	

	/*if (color == B && tipo != V) {
		switch (tipo) {
		case T:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("torreblanca.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;

		case C:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("caballoblanco.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;
		case A:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("alfilblanco.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;
		case Q:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("reinablanca.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;
		case K:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("reyblanco.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;
		case P:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("peonblanco.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;
		}
	}
	else if (color == N && tipo != V) {
		switch (tipo) {
		case T:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("torrenegra.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;

		case C:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("caballonegro.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;

		case A:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("alfilnegro.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;

		case Q:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("reinanegra.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;

		case K:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("reynegro.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;

		case P:
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("peonnegro.png").id);
			glDisable(GL_LIGHTING);
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, 0);
			glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, 0);
			glEnd();
			glEnable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
			break;
		}
	}
	*/
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
	if ((origen->p->movimientoValido(origen->PosReal, destino->PosReal) == true) && obstaculo(origen->p->pos, destino->p->pos) == false) {
		destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
		origen->setPiezaVacia(V);
	}

	if (destino->casillaVacia() == false)
		comerPieza(origen, destino);
}


void Tablero::comerPieza(Casilla* origen, Casilla* destino)
{
	delete& destino->p;
	destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
	origen->setPiezaVacia(V);

}