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

using namespace ETSIDI;

Tablero tablero;

void OnDraw(void);
void OnTimer(int value);
void inicio();

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
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);
	

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

	tablero.dibuja();


	glTranslatef(-4.2, 3, 0);
	glColor3ub(255, 255, 0);
	glutSolidCube(1.1);
	glTranslatef(4.2, -3, 0);

	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
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

