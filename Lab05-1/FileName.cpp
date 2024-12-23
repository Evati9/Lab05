#include <windows.h>
#include <gl/glut.h>
#include <math.h>
float angle = 0.0;
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	GLfloat ambient[] = { 0.24725, 0.1995, 0.0745, 1.0 };
	GLfloat diffuse[] = { 0.75164, 0.60648, 0.22648, 1.0 };
	GLfloat specular[] = { 1.628281, 0.555802, 0.366065, 1.0 };
	GLfloat position[] = { 150.0, 150.0, 150.0 , 0.0 };
	GLfloat specref[] = { 0.2f, 0.2f, 0.2, 1.0f };
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
	glMateriali(GL_FRONT, GL_SHININESS, 2);
}

void drawMyObjects()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glRotatef(angle, 1.0, 0.0, 1.0);
	angle += 0.01;
	glutSolidCube(5.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glScalef(0.4, 0.4, 0.4);
	drawMyObjects();
	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Light Example");
	init();
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}