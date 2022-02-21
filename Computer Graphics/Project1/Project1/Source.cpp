//講義上三顆球球的做法，glMatrixMode實際上使用較少，因為是用顏色控制，實際會用貼紋理的方式

#include <cmath>

#pragma comment( lib, "SOIL.lib" )
#include <cstdio> // for opening file
#include <GL/glut.h>
#include <GL/SOIL.h>

GLuint texture01, texture02;
GLuint LoadSOILTexture(const char * filename)
{
	GLuint texture;
	texture = SOIL_load_OGL_texture
		(
			filename,
			SOIL_LOAD_RGBA,
			SOIL_CREATE_NEW_ID,
			SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB |
			SOIL_FLAG_COMPRESS_TO_DXT
			);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	return texture;
}
int mx = 0, my = 0;
void init();
void render(float ambr, float ambg, float ambb,
	float difr, float difg, float difb,
	float specr, float specg, float specb, float shine);

void mouseMove(int x, int y) {
	mx = x;
	my = y;
	glutPostRedisplay();
}



void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);

	float aspect = (float)h / (float)w;
	float width = 8.0;
	glOrtho(-width / 2, width / 2, (-width / 2)*aspect, (width / 2) * aspect, -5, 10);

	glMatrixMode(GL_MODELVIEW);

}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glClearDepth(1.0f);
	glTranslatef(0.0, 0.0,-6.0f);
	glRotatef(0 + mx, 0.0f, 1.0f, 0.0f);
	glRotatef(0 + my, 1.0f, 0.0f, 0.0f);
	//glRotatef(0 + mz, 0.0f, 1.0f, 0.0f);
	//render(0.2125, 0.1275, 0.054, 0.714, 0.4284, 0.18144,	0.393548, 0.271906, 0.166721, 0.7);
	glDisable(GL_LIGHTING);
	glDisable(GL_DEPTH_TEST);
	glDisable(GL_FOG);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture01);
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex2f(0.0, 0.0);
	glTexCoord2f(1.0, 0.0); glVertex2f(1.0, 0.0);
	glTexCoord2f(1.0, 1.0); glVertex2f(1.0, 1.0);
	glTexCoord2f(0.0, 1.0); glVertex2f(0.0, 1.0);
	glEnd();
	glFlush();
}

int main() {
	int w = 640;
	int h = 480;
	glutInitWindowSize(w, h);
	glutCreateWindow("Building Models");
	init();
	glutReshapeFunc(reshape);
	glutMotionFunc(mouseMove);
	glutDisplayFunc(display);
	glutMainLoop();
}


void init(void)
{
	glClearColor(0.50f, 0.50f, 0.50f, 0.0f);
	float position[] = { 0.0, 3.0, 3.0, 0.0 };
	float ambient[] = { 0.0, 0.0, 0.0, 1.0 };
	float diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	// glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glShadeModel(GL_SMOOTH); /* enable smooth shading */
	glEnable(GL_LIGHTING); /* enable lighting */
	glEnable(GL_LIGHT0); /* enable light 0 */
	glEnable(GL_DEPTH_TEST); /* enable z buffer */
							 //texture = LoadTexture("Data/earth.bmp");
							 //texture= LoadSOILTexture("Data/ball03.bmp");
							 //texture = LoadSOILTexture("Data/thumb_014.jpg");
	texture01 = LoadSOILTexture("Data/flower05.png");
	texture02 = LoadSOILTexture("Data/thumb_014.jpg");
}


void render(float ambr, float ambg, float ambb,
	float difr, float difg, float difb,	float specr, float specg, float specb, float shine)
{
	float mat[4];

	mat[0] = ambr; mat[1] = ambg; mat[2] = ambb; mat[3] = 1.0;
	glLightfv(GL_LIGHT0, GL_AMBIENT, mat);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat);

	mat[0] = difr; mat[1] = difg; mat[2] = difb;
	glLightfv(GL_LIGHT0, GL_DIFFUSE, mat);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);

	mat[0] = specr; mat[1] = specg; mat[2] = specb;
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
	glMaterialf(GL_FRONT, GL_SHININESS, shine * 128.0);

	glEnable(GL_COLOR_MATERIAL);
}