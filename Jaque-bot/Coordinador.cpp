#include "Coordinador.h"

Coordinador::Coordinador()
{
	estado = INICIO;
	ETSIDI::playMusica("sonidos/inicio.mp3");
}

/*void Coordinador::teclaEspecial(unsigned char key)
{

}*/

void Coordinador::tecla(unsigned char key)
{
	if (estado == INICIO) {
		if (key == 'q') {
			ETSIDI::play("sonidos/boton.wav");
			mundo.inicializa();
			ETSIDI::playMusica("sonidos/juego.mp3");
			estado = JvJ;
		}
		else if (key == 'w') {

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

		glEnable(GL_TEXTURE_2D);

		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("peonblanco.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0); glVertex3f(-5, -4.2, 0);
		glTexCoord2d(1, 0); glVertex3f(-5, -3, 0);
		glTexCoord2d(1, 1); glVertex3f(-4.2, -3, 0);
		glTexCoord2d(0, 1); glVertex3f(-4.2, -4.2, 0);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);
	}
	else if (estado == JvJ) {

		mundo.dibuja();
		//tablero.dibuja();
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

}
