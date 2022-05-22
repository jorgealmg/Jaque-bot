#include "Tablero.h"

Tablero::Tablero() :tablero0("bin/Imagenes/tablero0.png", 1, 1, 220)
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

<<<<<<< Updated upstream
=======
	}

}


void Tablero::inicializa(){
	//Inicialización de piezas blancas
	Rey KB(B);
	Reina QB(B);
	Alfil A1B(B), A2B(B);
	Caballo C1B(B), C2B(B);
	Torre T1B(B), T2B(B);
	Peon P0B(B), P1B(B), P2B(B), P3B(B), P4B(B), P5B(B), P6B(B), P7B(B);

	cout << "Soy antes de set" << endl;
	Tab[3][0].iniPieza(&KB);
	cout << "Soy despues de set" << endl;
	char color = KB.getColor();
	cout << color << endl;
	char tipo = KB.getTipo();
	cout << tipo << endl;

	Tab[4][0].iniPieza(&QB);

	Tab[2][0].iniPieza(&A1B);
	Tab[5][0].iniPieza(&A1B);

	Tab[1][0].iniPieza(&C1B);
	Tab[6][0].iniPieza(&C2B);

	Tab[0][0].iniPieza(&T1B);
	Tab[7][0].iniPieza(&T1B);

	Tab[0][1].iniPieza(&P0B);
	Tab[1][1].iniPieza(&P1B);
	Tab[2][1].iniPieza(&P2B);
	Tab[3][1].iniPieza(&P3B);
	Tab[4][1].iniPieza(&P4B);
	Tab[5][1].iniPieza(&P5B);
	Tab[6][1].iniPieza(&P6B);
	Tab[7][1].iniPieza(&P7B);


	//Inicialización de piezas negras
	Rey KN(N);
	Reina QN(N);
	Alfil A1N(N), A2N(N);
	Caballo C1N(N), C2N(N);
	Torre T1N(N), T2N(N);
	Peon P0N(N), P1N(N), P2N(N), P3N(N), P4N(N), P5N(N), P6N(N), P7N(N);

	Tab[3][7].iniPieza(&KN);

	Tab[4][7].iniPieza(&QN);

	Tab[2][7].iniPieza(&A1N);
	Tab[5][7].iniPieza(&A1N);

	Tab[1][7].iniPieza(&C1N);
	Tab[6][7].iniPieza(&C2N);

	Tab[0][7].iniPieza(&T1N);
	Tab[7][7].iniPieza(&T1N);

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
>>>>>>> Stashed changes
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
