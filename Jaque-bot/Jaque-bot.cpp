#include <iostream>
#include "ETSIDI.h"
#include "freeglut.h"
#include "Pieza.h"
#include "Peon.h"
#include "Reina.h"
#include "Alfil.h"
#include "Rey.h"
#include "Caballo.h"
#include "Torre.h"
#include "Tablero.h"
#include "Coordinador.h"

using namespace ETSIDI;

Coordinador coordin;
Tablero tablero;
V2D ratonPos, u(310, 260), v(420, 300);
bool ratonIzq;
void OnKeyboardDown(unsigned char key, int x, int y);
void onSpecialKeyboardDown(int key, int x, int y);
void OnDraw(void);
void OnTimer(int value);
void inicio();
void raton(int boton, int est, int x, int y);
bool pulsaRect(V2D u, V2D v);

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("MiJuego");
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);
	glutMouseFunc(raton);
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	glutKeyboardFunc(OnKeyboardDown);
	glutSpecialFunc(onSpecialKeyboardDown);

	OnDraw();
	glutMainLoop();

	inicio();
}


void OnDraw(void)
{
	//Borrado de la pantalla	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(0, 0, 15,  // posicion del ojo
		0.0, 0, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 10.0, 0.0);      // definimos hacia arriba (eje Y)    

	coordin.dibuja();

	glTranslatef(-4.2, 3, 0);
	glColor3ub(255, 255, 0);
	glutSolidCube(1.1);
	glTranslatef(4.2, -3, 0);
	glutPostRedisplay();
	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}

void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el código de teclado
	coordin.tecla(key);
	glutPostRedisplay();
}

void OnTimer(int value)
{
	//poner aqui el código de animacion

	//no borrar estas lineas
	glutTimerFunc(25, OnTimer, 0);
	glutPostRedisplay();
}

void inicio() {

}

void onSpecialKeyboardDown(int key, int x, int y)
{
	//mundo.teclaEspecial(key);
	//glutPostRedisplay();
}


void raton(int boton, int est, int x, int y)
{
	ratonPos.x = x;
	ratonPos.y = y;
	coordin.setRaton(ratonPos, est);

	if (boton == GLUT_LEFT_BUTTON)
	{
		if (est == GLUT_DOWN)
		{
			ratonIzq = true;
			std::cout << std::endl << "x: " << ratonPos.x << std::endl << "y: " << ratonPos.y << std::endl;
		}
		else if (est == GLUT_UP)
		{
			ratonIzq = false;
		}
	}
	/*
		else if (boton == GLUT_RIGHT_BUTTON)
		{
			if (estado == GLUT_DOWN)
				ratonDer == true;
			else if (estado == GLUT_UP)
				ratonDer = false;
		}*/
}