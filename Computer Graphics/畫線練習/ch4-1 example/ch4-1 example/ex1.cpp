#include<iostream>
#include <GL/glut.h>
void translate() {
	glLoadIdentity();
	glTranslatef(2, 1, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f,-1.0f, 0.0f);
	glVertex3f(-1.0f,-1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glEnd();
	float m[16];
	glGetFloatv(GL_MODELVIEW_MATRIX, m);
	for
		(int i = 0; i<16; i++)
	{
		std::cout << m[i] << " ";
			if ((i + 1) % 4 == 0) std::cout << std::endl;
	}
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f,-1.0f, 0.0f);
	glVertex3f(-1.0f,-1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glEnd();
}

void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
	gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
	glMatrixMode(GL_MODELVIEW);
}
void display()
{
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	translate();
	glFlush();
}
int main()
{
	glutCreateWindow(" glMultMatrix");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutMainLoop();
}