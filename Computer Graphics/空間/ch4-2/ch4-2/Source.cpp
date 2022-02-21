#include <GL/glut.h>
double x_counter = 0, z_counter = 0;
int mx = 0, my = 0;
void processSpecialKeys(int key, int x, int y) {
	switch (key) { case GLUT_KEY_RIGHT: x_counter++;
		break;
	case GLUT_KEY_LEFT:x_counter--;
		break;
	case GLUT_KEY_UP:z_counter++;
		break;
	case GLUT_KEY_DOWN: z_counter--;
		break;
	} 
	glutPostRedisplay();// redraw the image now 
}
void mouseMove(int x, int y) {
	mx = x;
	my = y;
	glutPostRedisplay();
}
void myCube()
{
	glBegin(GL_QUADS);
	// Front face
	glColor3f(1, 0, 0);
	glVertex3f(-1.0f, -1.0f, 1.0f);	// Bottom left
	glVertex3f(1.0f, -1.0f, 1.0f);	// Bottom right
	glVertex3f(1.0f, 1.0f, 1.0f);	// Top right
	glVertex3f(-1.0f, 1.0f, 1.0f);	// Top left
									// Back face
	glVertex3f(-1.0f, -1.0f, -1.0f);	// Bottom right 
	glVertex3f(-1.0f, 1.0f, -1.0f);	// Top right 
	glVertex3f(1.0f, 1.0f, -1.0f);	// Top left 	
	glVertex3f(1.0f, -1.0f, -1.0f);	// Bottom left 
									// Top face
	glColor3f(1, 1, 0);
	glVertex3f(-1.0f, 1.0f, -1.0f);	// Top left 
	glVertex3f(-1.0f, 1.0f, 1.0f);	// Bottom left 
	glVertex3f(1.0f, 1.0f, 1.0f);	// Bottom right 
	glVertex3f(1.0f, 1.0f, -1.0f);	// Top right
									// Bottom face
	glVertex3f(-1.0f, -1.0f, -1.0f);	// Top right 
	glVertex3f(1.0f, -1.0f, -1.0f);	// Top left 
	glVertex3f(1.0f, -1.0f, 1.0f);	// Bottom left 
	glVertex3f(-1.0f, -1.0f, 1.0f);	// Bottom right 
									// Right face     
	glColor3f(0, 0, 1);
	glVertex3f(1.0f, -1.0f, -1.0f);	// Bottom right 
	glVertex3f(1.0f, 1.0f, -1.0f);	// Top right 
	glVertex3f(1.0f, 1.0f, 1.0f);	// Top left 
	glVertex3f(1.0f, -1.0f, 1.0f);	// Bottom left 
									// Left face
	glVertex3f(-1.0f, -1.0f, -1.0f);	// Bottom left 
	glVertex3f(-1.0f, -1.0f, 1.0f);	// Bottom right 
	glVertex3f(-1.0f, 1.0f, 1.0f);	// Top right 
	glVertex3f(-1.0f, 1.0f, -1.0f);	// Top left 
	glEnd();
}

//void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks);

//void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);

void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-4.0, 4.0, -4.0, 4.0, -2.0, 2.0);
	glMatrixMode(GL_MODELVIEW);
}
/*
void display()
{
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glClearDepth(1.0f); // Depth buffer setup
	glEnable(GL_DEPTH_TEST); // Enables depth testing
	glColor3f(0.0f, 0.0f, 0.0f);
	glRotatef(35.26f, 1.0f, 0.0f, 0.0f);
	glRotatef(45, 0.0f, 1.0f, 0.0f);
	glutWireSphere(2.0f, 38, 19);
	glColor3f(1.0f, .720f, .720f);
	glutSolidSphere(2.0f, 38, 19);
	glFlush();
}*/
/*
void display()
{
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glClearDepth(1.0f);                     // Depth buffer setup
	glEnable(GL_DEPTH_TEST);                // Enables depth testing

	glColor3f(1.0f, .720f, .720f);
	glRotatef(35.26f, 1.0f, 0.0f, 0.0f);
	glRotatef(45, 0.0f, 1.0f, 0.0f);
	glutWireSphere(1.0f, 32, 16);
	//glutSolidSphere(1.0f, 32, 16);

	glRotatef(35.26f, 1.0f, 0.0f, 0.0f);
	glRotatef(45, 0.0f, 1.0f, 0.0f);

	glRotatef(45.0f + x_counter, 1.0f, 0.0f, 0.0f);
	glRotatef(45.0f + z_counter, 0.0f, 0.0f, 1.0f);
	
	glRotatef(45.0f + mx, 1.0f, 0.0f, 0.0f);
	glRotatef(45.0f + my, 0.0f, 0.0f, 1.0f);

	myCube();
	glFlush();
}*/

void display() {
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glClearDepth(1.0f);
	// Depth buffer setup glEnable(GL_DEPTH_TEST);
	// Enables depth testing glColor3f(1.0f, .720f, .720f);
	glRotatef(35.26f,1.0f,0.0f,0.0f);
	glRotatef(45,0.0f,1.0f,0.0f);
	glutWireTeapot(2);
	glFlush();
}

int main() {
	glutCreateWindow("cube");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutSpecialFunc(processSpecialKeys);
	glutMotionFunc(mouseMove);
	glutMainLoop();
}