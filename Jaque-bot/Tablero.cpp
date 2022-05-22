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

	//Inicializacion de piezas blancas
	Rey KB('B');
	Reina QB('B');
	Alfil A1B('B'), A2B('B');
	Caballo C1B('B'), C2B('B');
	Torre T1B('B'), T2B('B');
	Peon P0B('B'), P1B('B'), P2B('B'), P3B('B'), P4B('B'), P5B('B'), P6B('B'), P7B('B');

	cout << KB.getColor() << " " << KB.getTipo() << endl;
	cout << QB.getColor() << " " << QB.getTipo() << endl;

	cout << "INIPIEZAS ANTES" << endl;
	Tab[4][0].iniPieza(&KB);
	cout << "INIPIEZAS DESPUES" << endl;

	Tab[3][0].iniPieza(&QB);

	Tab[2][0].iniPieza(&A1B);
	Tab[5][0].iniPieza(&A2B);

	Tab[1][0].iniPieza(&C1B);
	Tab[6][0].iniPieza(&C2B);

	Tab[0][0].iniPieza(&T1B);
	Tab[7][0].iniPieza(&T2B);

	Tab[0][1].iniPieza(&P0B);
	Tab[1][1].iniPieza(&P1B);
	Tab[2][1].iniPieza(&P2B);
	Tab[3][1].iniPieza(&P3B);
	Tab[4][1].iniPieza(&P4B);
	Tab[5][1].iniPieza(&P5B);
	Tab[6][1].iniPieza(&P6B);
	Tab[7][1].iniPieza(&P7B);


	//Inicializaci�n de piezas negras
	Rey KN('N');
	Reina QN('N');
	Alfil A1N('N'), A2N('N');
	Caballo C1N('N'), C2N('N');
	Torre T1N('N'), T2N('N');
	Peon P0N('N'), P1N('N'), P2N('N'), P3N('N'), P4N('N'), P5N('N'), P6N('N'), P7N('N');

	Tab[4][7].iniPieza(&KN);

	Tab[3][7].iniPieza(&QN);

	Tab[2][7].iniPieza(&A1N);
	Tab[5][7].iniPieza(&A2N);

	Tab[1][7].iniPieza(&C1N);
	Tab[6][7].iniPieza(&C2N);

	Tab[0][7].iniPieza(&T1N);
	Tab[7][7].iniPieza(&T2N);

	Tab[0][6].iniPieza(&P0N);
	Tab[1][6].iniPieza(&P1N);
	Tab[2][6].iniPieza(&P2N);
	Tab[3][6].iniPieza(&P3N);
	Tab[4][6].iniPieza(&P4N);
	Tab[5][6].iniPieza(&P5N);
	Tab[6][6].iniPieza(&P6N);
	Tab[7][6].iniPieza(&P7N);

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
void Tablero::mueve() {
	if (seleccionarCasilla() != NULL) cselect = seleccionarCasilla();	//std::cout << (seleccionarCasilla()->PosReal.x + 4.2)/1.2 << " " << (seleccionarCasilla()->PosReal.y-4.2)/1.2;
	if (cselect != NULL) {
		cselect1 = seleccionarCasilla();
		if (cselect1 != NULL) Mueve(cselect, cselect1);
	}
}

void Tablero::dibuja()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) {
			cout << Tab[i][j].colorPieza << endl; //IMPRIME VACIO
			cout << Tab[i][j].tipoPieza << endl;  //IMPRIME VACIO
			cout << "EMPIEZA DIBUJAPIEZAS" << endl;
			dibujaPiezas(i, j);
			cout << i << " " << j << endl;
		}
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
	if (Tab[i][j].ocupacion == true) {
		cout << "prueba tablero dibuja piezas" << endl;
		char colorx = Tab[i][j].colorPieza;
		cout << colorx << endl;
		char tipox = Tab[i][j].tipoPieza;
		cout << tipox << endl;

		if (colorx == 'B') {
			cout << "SOY UNA PIEZA BLANCAAAA SOY UNA PIEZA BLANCAAA DE PRUEBAAAAA" << endl;
			if (tipox == 'T') {
				cout << "SOY UNA TORRE SOY UNA TORRE DE PRUEBAAAAA" << endl;

				glEnable(GL_TEXTURE_2D);
				glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("torreblanca.png").id);
				glDisable(GL_LIGHTING);
				glBegin(GL_POLYGON);
				glColor3f(1, 1, 1);
				glTexCoord2d(0, 0); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y - 0.6, -1);
				glTexCoord2d(1, 0); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y - 0.6, -1);
				glTexCoord2d(1, 1); glVertex3f(Tab[i][j].PosReal.x + 0.6, Tab[i][j].PosReal.y + 0.6, -1);
				glTexCoord2d(0, 1); glVertex3f(Tab[i][j].PosReal.x - 0.6, Tab[i][j].PosReal.y + 0.6, -1);
				glEnd();
				glEnable(GL_LIGHTING);
				glDisable(GL_TEXTURE_2D);
			}
			else if (tipox == 'C') {
				//CaballoNegro.setAltura();

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
			}
			else if (tipox == 'A') {
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
			}
			else if (tipox == 'Q') {
				cout << "REINA REINA REINA REINA REINA" << endl;
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
			}
			else if (tipox == 'K') {
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
			}
			else if (tipox == 'P') {
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
			}
		}
		else if (colorx == 'N') {
			cout << "SOY UNA PIEZA NEGRAAAAAAA SOY UNA PIEZA NEGRAAAAAA" << endl;
			switch (tipox) {
			case 'T':
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

			case 'C':
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

			case 'A':
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

			case 'Q':
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

			case 'K':
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

			case 'P':
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
	}
}



Casilla* Tablero::getCasilla(V2D pos) {

	return &Tab[(int) pos.x][(int) pos.y];
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

void Tablero::Mueve(Casilla* origen, Casilla* destino) {

	if ((origen->p->movimientoValido(origen->PosReal, destino->PosReal) == true) && obstaculo(origen->p->pos, destino->p->pos) == false) {
		destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
		origen->setPiezaVacia('V');


		if (origen->p->getTipo() != 'P') {
			if ((origen->p->movimientoValido(origen->PosReal, destino->PosReal) == true) && obstaculo(origen->p->pos, destino->p->pos) == false) {
				if (destino->casillaVacia() == false)
					comerPieza(origen, destino);
				else {
					destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
					origen->setPiezaVacia('V');
				}
			}
		}

		else if (origen->p->getTipo() == 'P') {
			if (origen->p->comerPeon(origen->PosReal, destino->PosReal, origen->p) == true) {
				if (destino->casillaVacia() == false) {
					comerPieza(origen, destino);
					if (origen->p->getColor() == 'B' && destino->PosReal.y == 7)  //coronar
						coronar(destino);
					else if (origen->p->getColor() == 'N' && destino->PosReal.y == 0)
						coronar(destino);
				}
			}
		}

		else if (origen->p->movimientoValido(origen->PosReal, destino->PosReal) == true && obstaculo(origen->p->pos, destino->p->pos) == false) {
			if (destino->casillaVacia() == true) {
				destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
				origen->setPiezaVacia('V');
				if (origen->p->getColor() == 'B' && destino->PosReal.y == 7)  //coronar
					coronar(destino);
				else if (origen->p->getColor() == 'N' && destino->PosReal.y == 0)
					coronar(destino);
			}
		}

	}
}

void Tablero::coronar(Casilla* c) {
	cout << "Has coronado. Pulsa en mayúsculas la incial de la pieza que quieras" << endl;
	char letra;
	cin >> letra;
	switch (letra) {
	case 'R':
		c->setPieza(c->p, 'Q', c->p->color);
	case 'A':
		c->setPieza(c->p, 'A', c->p->color);
	case 'T':
		c->setPieza(c->p, 'T', c->p->color);
	case 'C':
		c->setPieza(c->p, 'C', c->p->color);
	}
}

void Tablero::comerPieza(Casilla* origen, Casilla* destino)
{
	ETSIDI::play("sonidos/muerte.wav");
	delete& destino->p;
	destino->setPieza(origen->p, origen->p->tipo, origen->p->color);
	origen->setPiezaVacia('V');
}


bool Tablero::setTurno(int *movimiento, Casilla * origen) {

	if ((*movimiento % 2 == 0) && origen->p->getColor() == 'N')  //mueven negras
		return true;
	else if ((*movimiento % 2 != 0) && origen->p->getColor() == 'B') //mueven blancas
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

Casilla* Tablero::seleccionarCasilla() {
	if (ratonEstado == GLUT_DOWN) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (pulsaRect(270 + 34 * i, 170 + 34 * j, 300 + 34 * i, 200 + 34 * j)) {
					if (Tab[i][j].p != NULL) return &Tab[i][j];
				}
			}
		}
		return NULL;
	}
	return NULL;
}

void Tablero::setRaton(V2D pos, int e) {
	ratonPos = pos;
	ratonEstado = e;
}

bool Tablero::pulsaRect(float x1, float y1, float x2, float y2) {
	if (x1 < ratonPos.x && ratonPos.x < x2 && y1 < ratonPos.y && ratonPos.y < y2) return true;
	else return false;
}