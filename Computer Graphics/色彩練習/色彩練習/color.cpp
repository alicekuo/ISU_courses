//利用按鍵改變顏色
#include <GL/glut.h>
float red = 1.0f, blue = 1.0f, green = 1.0f;
void processNormalKeys(unsigned char key, int x, int y) {
	if (key == 'r') {
		red = 1.0;
		green = 0.0;
		blue = 0.0;
	}
	if (key == 'g') {
		red = 0.0;
		green = 1.0;
		blue = 0.0;
	}
	if (key == 'b') {
		red = 0.0;
		green = 0.0;
		blue = 1.0;
	}
	if (key == 'p') {
		red = 0.5;
		green = 0.0;
		blue = 1.0;
	}
	glutPostRedisplay(); // redraw the image now
}
void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glPointSize(150);
	glBegin(GL_POINTS);
	glColor3f(red, green, blue);
	glVertex2i(0, 0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("draw point");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display); // register callbacks
	glutKeyboardFunc(processNormalKeys);
	glutMainLoop();
}

------------------------------------------------------------------------------------------------------
//二個矩形，其中一個是平移+旋轉
#include <GL/glut.h>
/*void rotate()
{
	glLoadIdentity();
	glRotatef(30, 0.0f, 0.0f, 1.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glEnd();
}*/
void translate()
{
glLoadIdentity();
glColor3f(1.0f,0.0f,0.0f);
 glBegin(GL_POLYGON);
glVertex3f( 1.0f, 1.0f, 0.0f);
glVertex3f( 1.0f, -1.0f, 0.0f);
glVertex3f( -1.0f, -1.0f, 0.0f);
glVertex3f( -1.0f, 1.0f, 0.0f);
 glEnd();
glTranslatef(3,2,0);
glRotatef(30, 0.0f, 0.0f, 1.0f);
glColor3f(1.0f,1.0f,0.0f);
 glBegin(GL_POLYGON);
glVertex3f( 1.0f, 1.0f, 0.0f);
glVertex3f( 1.0f, -1.0f, 0.0f);
glVertex3f( -1.0f, -1.0f, 0.0f);
glVertex3f( -1.0f, 1.0f, 0.0f);
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
	glutCreateWindow("Rotate");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutMainLoop();
}