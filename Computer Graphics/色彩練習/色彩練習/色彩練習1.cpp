#include <GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.0, 0.5);
	glVertex2f(0.0, -0.5);

	glColor3f(5.5f, 0.0f, 5.5f);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}
void main()
{
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	glutMainLoop();
}