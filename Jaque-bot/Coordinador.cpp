#include "Coordinador.h"

Coordinador::Coordinador()
{
	estado = INICIO;
	ETSIDI::playMusica("sonidos/inicio.mp3");
}

/*void Coordinador::teclaEspecial(unsigned char key)
{

}*/

//void Coordinador::setEstado(Estado est) { estado = est; }

void Coordinador::tecla(unsigned char key)
{
	if (estado == INICIO) {
		if (key == '1') {
			ETSIDI::play("sonidos/boton.wav");

			tablero.inicializa();
			mundo.inicializa();
			ETSIDI::playMusica("sonidos/juego.mp3");
			estado = JvJ;
		}
		else if (key == '2') {

		}
		else if (key == 's' || key == 'S') {
			exit(0);
		}
	}
	else if (estado == JvJ) {
		mundo.tecla(key);
		if (key == 's' || key == 'S') {
			exit(0);
		}
	}
}

void Coordinador::mueve()
{

}

void Coordinador::dibuja()
{
	ETSIDI::setTextColor(1, 1, 0);
	ETSIDI::setFont("fuentes/Bitwise.ttf", 12);
	ETSIDI::printxy("Ajedrez", -10, 11);

	if (estado == INICIO) {
		mundo.dibuja();
		//PIN.dibuja();
		glEnable(GL_TEXTURE_2D);

		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("PANTALLA_INICIO.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0); glVertex3f(-5, 5, 0);
		glTexCoord2d(1, 0); glVertex3f(5, 5, 0);
		glTexCoord2d(1, 1); glVertex3f(5, -5, 0);
		glTexCoord2d(0, 1); glVertex3f(-5, -5, 0);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);

	}
	else if (estado == JvJ) {

		mundo.dibuja();
		tablero.dibuja();
	}
	else if (estado == JvAI)
	{
	
	}

}

