#pragma comment( lib, "SOIL.lib" )
#include <cstdio> // �}�ҹϤ���
#include <cmath>
#include <GL/glut.h>
#include <SOIL.h> // �K���z

float a = 1.0; // �ҫ�����
float oniona = 1.5*a;
			   //ø�ϥ�
int mx = 0, my = 0;
void draw_axis(float length);
void rectangle(float n[], float pt1[], float pt2[], float pt3[], float pt4[]);
void circle(float r);
float n[3] = { 0 };

void cuboid(float x, float y, float z);
void trapezoid0();
void trapezoid1();
void column(float r, float length);
void arc(float r, float length);
void arch(float h, float w, float thickness);
void door(float r, float length);
void RotateShape(int NumberOfI, float InitialShape[][3], int NumberOfEdges);

//���z��
void init(void);
GLuint LoadSOILTexture(const char * filename);
GLuint texture, texture1, texture2, texture3, texture4, texture5, texture6, texture7, texture8;

void MainCastle();
void SmallCastle();
void Middle();

/////////�s�[������////////////
float i = 0.0, N = 1000.0;//�e���x�������b��
const GLfloat Pr = 0.155f;
const GLfloat Pi = 3.1415926536f;//�e��W�������
char shoulder = 0;
void processSpecialKeys(int key, int x, int y);//�e��W�������
void rotatedoor2(float r, float length);
void balcony(float r, float length);//���x

void mouseMove(int x, int y) {
	mx = x;
	my = y;
	glutPostRedisplay();
}

/*�e��*/
void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);

	float aspect = (float)h / (float)w;
	float width = 15.0;
	glOrtho(-width / 2, width / 2, (-width / 2)*aspect, (width / 2) * aspect, -50,50);
	glMatrixMode(GL_MODELVIEW);

}

/*�i��*/
void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -6.0);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);

	glRotatef(-30 + mx, 0.0f, 1.0f, 0.0f);
	glRotatef(25 + my, 1.0f, 0.0f, 0.0f);

	glDisable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glDisable(GL_FOG);

	glEnable(GL_TEXTURE_2D);
	glEnable(GL_TEXTURE_GEN_S);//�@�i��j���i
	
	SmallCastle();

	glPushMatrix();

		glTranslatef(1*a, 0.0, 0.0);
		Middle();

		glTranslatef((1.0/2.0) * a, 0.0, 0.0);
		MainCastle();

		glTranslatef(3.0 * a, 0.0, 0.0);
		Middle();

		glTranslatef((1.0/2.0)* a, 0.0, 0.0);
		SmallCastle();

		//��
		glRotatef(90, 0.0f, 1.0f, 0.0f);
		glTranslatef((1.0/2.0)*a, (5.0 / 12.0)*a, (6.0 / 5.0)*a);
		glBindTexture(GL_TEXTURE_2D, texture2);
		arch((2.0 / 3.0)*a, (1.0 / 2.0)*a, (1.0 / 5.0)*a);

		glBindTexture(GL_TEXTURE_2D, texture4);
		door((1.0 / 4.0)*a, (2.0 / 3.0) * a);

	glPopMatrix();

	glEnd();

	glFlush();
}

void rectangle(float n[], float pt1[], float pt2[], float pt3[], float pt4[])
{
	glBegin(GL_QUADS);
	glNormal3fv(n);//�������u
	glTexCoord2f(0.0, 0.0); glVertex3fv(pt1);
	glTexCoord2f(1.0, 0.0); glVertex3fv(pt2);
	glTexCoord2f(1.0, 1.0); glVertex3fv(pt3);
	glTexCoord2f(0.0, 1.0); glVertex3fv(pt4);
	glEnd();
	glFlush();
}

void draw_axis(float length)
{
	int n = 6;
	glBegin(GL_LINE_STRIP);
	for (int i = 0; i < n; i++)
	{
		glColor3f(1, 0, 0);
		glVertex3f(0, 0, 0);
		glVertex3f(length, 0, 0);

		glColor3f(0, 1, 0);
		glVertex3f(0, 0, 0);
		glVertex3f(0, length, 0);

		glColor3f(0, 0, 1);
		glVertex3f(0, 0, 0);
		glVertex3f(0, 0, length);
	}
}
//���z�����u
void init(void)
{
	glClearColor(0.50f, 0.50f, 0.50f, 0.0f);
	float position[] = { 0.0, 3.0, 3.0, 0.0 };
	float ambient[] = { 0.0, 0.0, 0.0, 1.0 };
	float diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	//  glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);

	glShadeModel(GL_SMOOTH);	 /* enable smooth shading */
	glEnable(GL_LIGHTING);		 /* enable lighting */
	glEnable(GL_LIGHT0);		 /* enable light 0 */
	glEnable(GL_DEPTH_TEST);	 /* enable z buffer */

	texture = LoadSOILTexture("00 �Ŧ�~�� III.jpg");
	texture1 = LoadSOILTexture("01 ���j�� I.jpg");
	texture2 = LoadSOILTexture("02 �զ� II.JPG");
	texture3 = LoadSOILTexture("03 ��W I.bmp");
	texture4 = LoadSOILTexture("04 ���Y III.jpg");
	texture5 = LoadSOILTexture("05 ���� II.jpg");
	texture6 = LoadSOILTexture("06 �v�� I.bmp");
	texture7 = LoadSOILTexture("07 �v�� II.bmp");
	texture8 = LoadSOILTexture("08 ���Y I.jpg");
}

//�K���z��
GLuint LoadSOILTexture(const char * filename)
{
	GLuint texture; texture = SOIL_load_OGL_texture(
		filename,
		SOIL_LOAD_RGBA,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB |
		SOIL_FLAG_COMPRESS_TO_DXT);

	glBindTexture(GL_TEXTURE_2D, texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	return texture;
}

int main() {
	int w = 640;
	int h = 480;
	glutInitWindowSize(w, h);
	glutCreateWindow("�ڭ̪�����");
	init();
	glutReshapeFunc(reshape);
	glutMotionFunc(mouseMove);
	glutDisplayFunc(display);
	glutSpecialFunc(processSpecialKeys);
	glutMainLoop();
}

//===================================================����c��========================================================

void cuboid(float x, float y, float z)
{
	float p0[] = { 0.0 ,0.0, 0.0 },
		p1[] = { x, 0.0, 0.0 },
		p2[] = { x, y,0.0 },
		p3[] = { 0.0, y, 0.0 };

	float p4[] = { 0.0, y, -z },
		p5[] = { 0.0, 0.0, -z },
		p6[] = { x, 0.0, -z },
		p7[] = { x, y, -z };

	glTexCoord3f(0.0, 0.0, 0.0);
	glTexCoord3f(x, 0.0, 0.0);
	glTexCoord3f(x, y, 0.0);
	glTexCoord3f(0.0, y, 0.0);

	glTexCoord3f(0.0, y, -z);
	glTexCoord3f(0.0, 0.0, -z);
	glTexCoord3f(x, 0.0, -z);
	glTexCoord3f(x, y, z);

	float n1[] = { 0,0,0 };
	rectangle(n1, p3, p4, p7, p2);
	rectangle(n1, p0, p3, p2, p1);
	rectangle(n1, p1, p2, p7, p6);
	rectangle(n1, p5, p4, p3, p0);
	rectangle(n1, p5, p4, p7, p6);
	rectangle(n1, p0, p5, p6, p1);

	glEnd();


}

//�ؿv�W������� �W����1/3a�B�U����a�B����a
void  trapezoid0()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	float p0[] = { 0.0, 0.0, 0.0 },
		p1[] = { 1 * a, 0.0, 0.0 },
		p2[] = { (2.0 / 3.0)*a, 1 * a, (-1.0 / 3.0)*a },
		p3[] = { (1.0 / 3.0)*a, 1 * a, (-1.0 / 3.0)*a };
	float p4[] = { (1.0 / 3.0)*a, 1 * a, (-2.0 / 3.0)*a },
		p5[] = { 0.0, 0.0, -1 * a },
		p6[] = { 1 * a, 0.0, -1 * a },
		p7[] = { (2.0 / 3.0)*a, 1 * a, (-2.0 / 3.0)*a };

	glTexCoord3f(0.0, 0.0, 0.0);
	glTexCoord3f(1 * a, 0.0, 0.0);
	glTexCoord3f((2.0 / 3.0)*a, 1 * a, (-1.0 / 3.0)*a);
	glTexCoord3f((1.0 / 3.0)*a, 1 * a, (-1.0 / 3.0)*a);

	glTexCoord3f((1.0 / 3.0)*a, 1 * a, (-2.0 / 3.0)*a);
	glTexCoord3f(0.0, 0.0, -1 * a);
	glTexCoord3f(1 * a, 0.0, -1 * a);
	glTexCoord3f((2.0 / 3.0)*a, 1 * a, (-2.0 / 3.0)*a);

	float n1[] = { 0,0,0 };
	rectangle(n1, p3, p4, p7, p2);
	rectangle(n1, p0, p3, p2, p1);
	rectangle(n1, p1, p2, p7, p6);
	rectangle(n1, p5, p4, p3, p0);
	rectangle(n1, p5, p4, p7, p6);
	rectangle(n1, p0, p5, p6, p1);

}

void  trapezoid1()
{
	float p0[] = { 0.0, 0.0, 0.0 },
		p1[] = { (1.0 / 2.0)* a, 0.0, 0.0 },
		p2[] = { (5.0 / 12.0)*a, (1.0 / 6.0)* a, (-1.0 / 12.0)*a },
		p3[] = { (1.0 / 12.0)*a, (1.0 / 6.0)* a, (-1.0 / 12.0)*a };
	float p4[] = { (1.0 / 12.0)*a, (1.0 / 6.0)* a, -(5.0 / 12.0)*a },
		p5[] = { 0.0, 0.0, -(1.0 / 2.0)* a },
		p6[] = { (1.0 / 2.0)* a, 0.0, (-1.0 / 2.0)* a },
		p7[] = { (5.0 / 12.0)*a, (1.0 / 6.0)* a, (-5.0 / 12.0)*a };

	glTexCoord3f(0.0, 0.0, 0.0);
	glTexCoord3f(1 * a, 0.0, 0.0);
	glTexCoord3f((2.0 / 3.0)*a, 1 * a, (-1.0 / 3.0)*a);
	glTexCoord3f((1.0 / 3.0)*a, 1 * a, (-1.0 / 3.0)*a);

	glTexCoord3f((1.0 / 3.0)*a, 1 * a, (-2.0 / 3.0)*a);
	glTexCoord3f(0.0, 0.0, -1 * a);
	glTexCoord3f(1 * a, 0.0, -1 * a);
	glTexCoord3f((2.0 / 3.0)*a, 1 * a, (-2.0 / 3.0)*a);

	float n1[] = { 0,0,0 };
	rectangle(n1, p3, p4, p7, p2);
	rectangle(n1, p0, p3, p2, p1);
	rectangle(n1, p1, p2, p7, p6);
	rectangle(n1, p5, p4, p3, p0);
	rectangle(n1, p5, p4, p7, p6);
	rectangle(n1, p0, p5, p6, p1);

}

//��Τ��������� ( ��ò )
void arc(float r, float length)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	int const n = 36;
	float PI = (float)acos(-1.0);
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(PI / n);
	}
	glBegin(GL_QUADS);
	for (int i = 6; i <= n - 6; i++)
	{
		glTexCoord3f(x[i], y[i], 0.0);				glVertex3f(x[i], y[i], 0.0);
		glTexCoord3f(x[i], y[i], -length);			glVertex3f(x[i], y[i], -length);
		glTexCoord3f(x[i + 1], y[i + 1], -length);	glVertex3f(x[i + 1], y[i + 1], -length);
		glTexCoord3f(x[i + 1], y[i + 1], 0.0);		glVertex3f(x[i + 1], y[i + 1], 0.0);
	}
	glEnd();
}

/*���򵡤᪺�~��*/
void arch(float h, float w, float thickness)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	float r = w / (2.0);
	float deep = (h - r);//�]�����I�b���Ϊ����ߡA�ҥH�Ψӭp���ߥH�U������
	int const n = 36;
	float PI = (float)acos(-1.0);
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(PI / n);
	}
	glBegin(GL_QUADS);
	//�b��
	for (int i = 6; i < n - 6; i++)
	{
		glTexCoord3f(x[i], y[i], 0.0);				glVertex3f(x[i], y[i], 0.0);
		glTexCoord3f(x[i], y[i], -thickness);		glVertex3f(x[i], y[i], -thickness);
		glTexCoord3f(x[i + 1], y[i + 1], -thickness);	glVertex3f(x[i + 1], y[i + 1], -thickness);
		glTexCoord3f(x[i + 1], y[i + 1], 0.0);			glVertex3f(x[i + 1], y[i + 1], 0.0);
	}

	//�U��

	glTexCoord3f(x[30], y[30], 0.0);			glVertex3f(x[30], y[30], 0.0);
	glTexCoord3f(x[30], y[30], -thickness);		glVertex3f(x[30], y[30], -thickness);
	glTexCoord3f(x[30], -deep, -thickness);		glVertex3f(x[30], -deep, -thickness);
	glTexCoord3f(x[30], -deep, 0.0);			glVertex3f(x[30], -deep, 0.0);

	glTexCoord3f(x[6], -deep, 0.0);				glVertex3f(x[6], -deep, 0.0);
	glTexCoord3f(x[6], -deep, -thickness);		glVertex3f(x[6], -deep, -thickness);
	glTexCoord3f(x[6], y[6], -thickness);		glVertex3f(x[6], y[6], -thickness);
	glTexCoord3f(x[6], y[6], 0.0);				glVertex3f(x[6], y[6], 0.0);
	glTexCoord3f(x[6], -deep, 0.0);				glVertex3f(x[6], -deep, 0.0);

	glEnd();
}

/*���򵡤�*/
void door(float r, float deep)
{
	float h = deep - r;
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	int const n = 36;
	float PI = (float)acos(-1.0);
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(PI / n);
	}

	glBegin(GL_POLYGON);
	for (int i = 6; i < n - 6; i++)
	{
		glTexCoord3f(x[i], y[i], 0.0);			glVertex3f(x[i], y[i], 0.0);
		glTexCoord3f(x[i + 1], y[i + 1], 0.0);	glVertex3f(x[i], y[i + 1], 0.0);
	}
	glTexCoord3f(x[30], y[6], 0.0);				glVertex3f(x[30], y[6], 0.0);
	glTexCoord3f(x[30], -h, 0.0);				glVertex3f(x[30], -h, 0.0);
	glTexCoord3f(x[6], -h, 0.0);				glVertex3f(x[6], -h, 0.0);
	glTexCoord3f(x[6], y[6], 0.0);				glVertex3f(x[6], y[6], 0.0);
	glEnd();
}

/*�γ��W����W*/
void column(float r, float h)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	int const n = 24;
	float PI = (float)acos(-1.0);
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i<n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(2 * PI / n);
	}

	glBegin(GL_QUADS);
	for (int i = 0; i<n; i++)
	{
		glTexCoord3f(x[i], y[i], 0.0);			glVertex3f(x[i], y[i], 0.0);
		glTexCoord3f(x[i], y[i], -h);			glVertex3f(x[i], y[i], -h);
		glTexCoord3f(x[i + 1], y[i + 1], -h);	glVertex3f(x[i + 1], y[i + 1], -h);
		glTexCoord3f(x[i + 1], y[i + 1], 0.0);	glVertex3f(x[i + 1], y[i + 1], 0.0);
	}
	glEnd();

	circle(r);
	glTexCoord3f(0.0, 0.0, -h);glTranslatef(0.0, 0.0, -h);
	circle(r);
}

/*�γ��W��W���\�l*/
void circle(float r)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	int const n = 36;
	float PI = (float)acos(-1.0);
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i<n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(2 * PI / n);
	}

	glBegin(GL_QUADS);
	for (int i = 0; i<n + 1; i++)
	{
		glTexCoord3f(x[i], y[i], 0.0);glVertex3f(x[i], y[i], 0.0);
	}
	glEnd();
}

//�v��
void RotateShape(int NumberOfI, float InitialShape[][3], int NumberOfEdges)//��?��?
{
	GLfloat MeshPoint[72][20][3];//�I?
	int i = 0, j = 0;
	float PI = acos(-1.0);
	GLfloat theta = 2.0*PI / (GLfloat)NumberOfI; //start position�_�l��m
												 //GLfloat radius; GLfloat�b?;
												 //for (j=0; j<NumberOfEdges; j++)
	for (j = 0; j <= NumberOfEdges; j++)
	{
		for (i = 0; i <= NumberOfI; i++)
		{
			MeshPoint[i][j][0] = InitialShape[j][0] * cos(theta*i);
			MeshPoint[i][j][1] = InitialShape[j][1];
			MeshPoint[i][j][2] = InitialShape[j][0] * sin(theta*i);
		}
	}
	for (j = 0; j<NumberOfEdges; j++)
	{
		for (i = 0; i <= NumberOfI - 1; i++)
		{
			glBegin(GL_QUADS);
			glVertex3fv(&MeshPoint[i][j][0]);
			glVertex3fv(&MeshPoint[i + 1][j][0]);
			glVertex3fv(&MeshPoint[i + 1][j + 1][0]);
			glVertex3fv(&MeshPoint[i][j + 1][0]);
			glEnd();
		}
	}
}

/*���*////////////////////////////////////////////////////////////////////////
void processSpecialKeys(int key, int x, int y)
{
	switch (key) {
	case GLUT_KEY_RIGHT:
		shoulder = (shoulder + 5) % 360;
		break;
	case GLUT_KEY_LEFT:
		shoulder = (shoulder - 5) % 360;
		break;
	}
	glutPostRedisplay();// redraw the image now?�b���s?��?��
}

void rotatedoor2(float r, float h)
{
	float deep = (h - r);//�]�����I�b���Ϊ����ߡA�ҥH�Ψӭp���ߥH�U������
	int const n = 36;
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(Pi / n);
	}

	glBegin(GL_POLYGON);
	glTexCoord3f(r*(1 - Pr) + x[6], 0.0, 0.0);					glVertex3f(r*(1 - Pr) + x[6], 0.0, 0.0);
	glTexCoord3f(r*(1 - Pr) + x[6], y[6] + deep, 0.0);			glVertex3f(r*(1 - Pr) + x[6], y[6] + deep, 0.0);
	for (int i = 6; i < n - 6; i++)
	{
		glTexCoord3f(r*(1 - Pr) + x[i], y[i] + deep, 0.0);		glVertex3f(r*(1 - Pr) + x[i], y[i] + deep, 0.0);
	}
	glTexCoord3f(r*(1 - Pr) + x[30], y[6] + deep, 0.0);			glVertex3f(r*(1 - Pr) + x[30], y[6] + deep, 0.0);
	glTexCoord3f(r*(1 - Pr) + x[30], 0.0, 0.0);					glVertex3f(r*(1 - Pr) + x[30], 0.0, 0.0);
	glTexCoord3f(r*(1 - Pr) + x[6], 0.0, 0.0);					glVertex3f(r*(1 - Pr) + x[6], 0.0, 0.0);

	glEnd();
}////////////////////////////////////////////////////////////////

 //���xbalcony���� ( ��ò )��s��/////////////////////////////
void balcony(float r, float length)
{
	int const n = 36;
	float PI = (float)acos(-1.0);
	float theta = 0.0, x[n + 1], y[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		x[i] = (float)(r* cos(theta));
		y[i] = (float)(r* sin(theta));
		theta = theta + (float)(PI / n);
	}
	glBegin(GL_POLYGON);
	glTexCoord3f(x[0], y[36], 0.0);		glVertex3f(x[0], y[36], 0.0);
	for (int i = 0; i <= n; i++)
	{
		glTexCoord3f(x[i], y[i], 0.0);		glVertex3f(x[i], y[i], 0.0);
	}
	for (int i = n; i >= 0; i--)
	{
		glTexCoord3f(x[i], y[i], -length);		glVertex3f(x[i], y[i], -length);
	}
	glTexCoord3f(x[0], y[0], 0.0);			glVertex3f(x[0], y[0], 0.0);
	glEnd();
}

//====================================================================�ؿv����=======================================================================

//------------------------���k���p����----------------------
void SmallCastle()
{
	double theta = 0;
	theta = atan((1.0 / 3.0)*a / 1.0*a)*180.0 / 3.1415926;

	glBindTexture(GL_TEXTURE_2D, texture);//�j�w���z��H
	cuboid(1 * a, 2 * a, 1 * a);

	//�γ��W���|�Ӷ꩷
	//��
	glPushMatrix();
	glTranslatef(0.0, 2 * a, 0.0);
	glBindTexture(GL_TEXTURE_2D, texture1);
	trapezoid0();

	glTranslatef((1.0 / 2.0*a), 0.0, 0.0);
	glRotatef(-theta, 1.0f, 0.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arc(((1.0 / 2.0)*a - 0.02), (1.0 / 24.0)*a);
	glPopMatrix();

	//�k
	glPushMatrix();
	glTranslatef(0.0, 2 * a, 0.0);
	glTranslatef(0.0, 0.0, (-1.0 / 2.0)*a);
	glRotatef(90, 0.0f, 1.0f, 0.0f);
	glRotatef(theta, 1.0f, 0.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arc(((1.0 / 2.0)*a - 0.02), (1.0 / 24.0)*a);
	glPopMatrix();

	//�e
	glPushMatrix();
	glTranslatef(0.0, 2 * a, 0.0);
	glTranslatef((1.0 / 2.0)*a, 0.0, -1 * a);
	glRotatef(180, 0.0f, 1.0f, 0.0f);
	glRotatef(-theta, 1.0f, 0.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arc(((1.0 / 2.0)*a - 0.02), (1.0 / 24.0)*a);
	glPopMatrix();

	//��
	glPushMatrix();
	glTranslatef(0.0, 2 * a, 0.0);
	glTranslatef(1 * a, 0.0, -(1.0 / 2.0)*a);
	glRotatef(-90, 0.0f, 1.0f, 0.0f);
	glRotatef(theta, 1.0f, 0.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arc(((1.0 / 2.0)*a - 0.02), (1.0 / 24.0)*a);
	glPopMatrix();

	//�γ��W���Ĥ@�h��W
	glPushMatrix();
	glTranslatef(0.0, 3 * a, 0.0);
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((1.0 / 2.0)*a, -(1.0 / 2.0)*a, 0.0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 6.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ��W���ĤG�h��W
	glPushMatrix();
	glTranslatef(0.0, (29.0 / 9.0) * a, 0.0);
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((1.0 / 2.0)*a, -(1.0 / 2.0)*a, 0.0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 6.0)*(2.0 / 3.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//����
	glPushMatrix();
	glTranslatef((1.0 / 2.0)*a, (7.0 / 4.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arch(1 * a, (1.0 / 4.0)*a, (1.0 / 18.0)*a);

	glBindTexture(GL_TEXTURE_2D, texture5);
	door((1.0 / 8.0)*a, 1 * a);
	glPopMatrix();

	//�v��
	glPushMatrix();
	glTranslatef((1.0 / 2.0)*a, (31.0 / 9.0)*a, -(1.0 / 2.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture6);
	float InitialShape01[][3] = { { 0, 0, 0 },{ (2.0 / 48.0)*a, (1.0 / 270.0)*a, 0 },{ (4.0 / 48.0)*a, (3.0 / 270.0)*a, 0 },{ (6.0 / 48.0)*a, (7.5 / 270.0)*a, 0 },{ (6.5 / 48.0)*a, (10.0 / 270.0)*a, 0 },{ (6.9 / 48.0)*a, (14.0 / 270.0)*a, 0 },{ (7.22 / 48.0)*a, (20.0 / 270.0)*a, 0 },
	{ (7.11 / 48.0)*a, (23.4 / 270.0)*a, 0 },{ (7.0 / 48.0)*a, (26.3 / 270.0)*a, 0 },{ (6.0 / 48.0)*a, (31.0 / 270.0)*a, 0 },{ (4.0 / 48.0)*a, (34.3 / 270.0)*a, 0 },{ (3.0 / 48.0)*a, (38.0 / 270.0)*a, 0 },{ (2.0 / 48.0)*a, (43.0 / 270.0)*a, 0 },{ (1.1 / 48.0)*a, (50.0 / 270.0)*a, 0 },{ (0.2 / 48.0)*a, (60.0 / 270.0)*a, 0 },{ (0.2 / 48.0)*a, (69.0 / 270.0)*a, 0 },{ 0,(73.0 / 270.0)*a, 0 } };
	RotateShape(36, InitialShape01, 16);//16??,17���I
	glPopMatrix();
}

//--------------�������p�Фl----------------
void Middle()
{
	//�p�G�Τl�����A��0.5a��0.5a,�e0.5a
	glPushMatrix();
		glBindTexture(GL_TEXTURE_2D, texture);
		cuboid(0.5 * a, 0.5* a, 0.5 * a);

		//�p�G�Τl�W����ٱ�@
		glTranslatef(0.0, 0.5, 0.0);
		glBindTexture(GL_TEXTURE_2D, texture1);
		trapezoid1();
	glPopMatrix();

	//���Τl�����A��0.5a��2a,�e(3.0/4.0)*a
	glPushMatrix();
		glTranslatef(0.0, 0.0, (-1.0 / 2.0)*a);
		glBindTexture(GL_TEXTURE_2D, texture);
		cuboid(0.5*a, 2.0*a, (3.0 / 4.0)*a);
	glPopMatrix();
}

//-------�����D��---------
void MainCastle()
{
	glBindTexture(GL_TEXTURE_2D, texture);
	cuboid(3.0 * a, (5.0 / 2.0)* a, (3.0 / 2.0) * a);

	//��
	glPushMatrix();
	glTranslatef((3.0 / 2.0)*a, (5.0 / 12.0)*a, (1.0 / 5.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arch((2.0 / 3.0)*a, (1.0 / 2.0)*a, (1.0 / 5.0)*a);
	glPopMatrix();

	glPushMatrix();
	glTranslatef((3.0 / 2.0)*a - (1.0 / 4.0)*a + (Pr*(1.0 / 4.0)*a), 0.0, (1.0 / 5.0)*a);//x�b�Mz�b�첾
	glRotatef(shoulder, 0, 1, 0);//����N�X
	glBindTexture(GL_TEXTURE_2D, texture4);
	rotatedoor2((1.0 / 4.0)*a, (2.0 / 3.0)*a);//�e�F�@�Ӫ�
	glPopMatrix();

	////////���䪺///////////���x=���e�ӵ���+�A�[�ӥb��W���O///////////
	glPushMatrix();
	glTranslatef(0.5*a, (15.0 / 8.0)*a, 0.0);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arch(a, 0.5*a, (-1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	door(0.25*a, 1.0* a);
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef(0.0, (1.0 / 18.0)*a, a);
	glBindTexture(GL_TEXTURE_2D, texture8);
	glBegin(GL_QUADS);
	for (i = 0; i<N; ++i)
		glVertex2f(0.25*a*cos(Pi / N*i), (0.25*a)*sin(Pi / N*i));
	glEnd();
	balcony(0.25*a, 0.25*a);
	glPopMatrix();
	//////////////////////////////////////////////////////////////////

	////////�k�䪺///////////���x=���e�ӵ���+�A�[�ӥb��W���O///////////
	glPushMatrix();
	glTranslatef(2.5*a, (15.0 / 8.0)*a, 0.0);
	glBindTexture(GL_TEXTURE_2D, texture2);
	arch(a, 0.5*a, (-1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	door(0.25*a, 1.0* a);
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef(0.0, (1.0 / 18.0)*a, a);
	glBindTexture(GL_TEXTURE_2D, texture8);
	glBegin(GL_QUADS);
	for (i = 0; i<N; ++i)
		glVertex2f(0.25*a*cos(Pi / N*i), (0.25*a)*sin(Pi / N*i));
	glEnd();
	balcony(0.25*a, 0.25*a);
	glPopMatrix();
	///////////////////////////////////////////////////////////////////

	//�p����1
	glPushMatrix();
		glTranslatef((1.0 / 4.0)*a, (7.0 / 24.0)*a, (1.0 / 18.0)*a);
		glBindTexture(GL_TEXTURE_2D, texture2);
		arch((5.0 / 12.0) * a, (1.0 / 4.0)*a, (1.0 / 18.0)*a);
	glPopMatrix();

	glPushMatrix();
		glTranslatef((1.0 / 4.0)*a - (1.0 / 8.0)*a + (Pr*(1.0 / 8.0)*a), 0.0, (1.0 / 18.0)*a);//x�b�Mz�b�첾
		glRotatef(shoulder, 0, 1, 0);//����N�X
		glBindTexture(GL_TEXTURE_2D, texture5);
		rotatedoor2((1.0 / 8.0)*a, (5.0 / 12.0)*a);//�e�F�@�ӵ���
	glPopMatrix();

	//�p����2
	glPushMatrix();
	glTranslatef((3.0 / 4.0)*a, (7.0 / 24.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	arch((5.0 / 12.0)  * a, (1.0 / 4.0)*a, (1.0 / 18.0)*a);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(((3.0 / 4.0)- (1.0 / 4.0))*a, 0.0, 0.0);
	glTranslatef((1.0 / 4.0)*a - (1.0 / 8.0)*a + (Pr*(1.0 / 8.0)*a), 0.0, (1.0 / 18.0)*a);//x�b�Mz�b�첾
	glRotatef(shoulder, 0, 1, 0);//����N�X
	glBindTexture(GL_TEXTURE_2D, texture5);
	rotatedoor2((1.0 / 8.0)*a, (5.0 / 12.0)*a);//�e�F�@�ӵ���
	glPopMatrix();

	//�p����3
	glPushMatrix();
	glTranslatef((9.0 / 4.0)*a, (7.0 / 24.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	arch((5.0 / 12.0)  * a, (1.0 / 4.0)*a, (1.0 / 8.0)*a);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(((9.0 / 4.0) - (1.0 / 4.0))*a, 0.0, 0.0);
	glTranslatef((1.0 / 4.0)*a - (1.0 / 8.0)*a + (Pr*(1.0 / 8.0)*a), 0.0, (1.0 / 18.0)*a);//x�b�Mz�b�첾
	glRotatef(shoulder, 0, 1, 0);//����N�X
	glBindTexture(GL_TEXTURE_2D, texture5);
	rotatedoor2((1.0 / 8.0)*a, (5.0 / 12.0)*a);//�e�F�@�ӵ���
	glPopMatrix();

	//�p����4
	glPushMatrix();
	glTranslatef((11.0 / 4.0)*a, (7.0 / 24.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	arch((5.0 / 12.0)  * a, (1.0 / 4.0)*a, (1.0 / 18.0)*a);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(((11.0 / 4.0) - (1.0 / 4.0))*a, 0.0, 0.0);
	glTranslatef((1.0 / 4.0)*a - (1.0 / 8.0)*a + (Pr*(1.0 / 8.0)*a), 0.0, (1.0 / 18.0)*a);//x�b�Mz�b�첾
	glRotatef(shoulder, 0, 1, 0);//����N�X
	glBindTexture(GL_TEXTURE_2D, texture5);
	rotatedoor2((1.0 / 8.0)*a, (5.0 / 12.0)*a);//�e�F�@�ӵ���
	glPopMatrix();

	//����������
	glPushMatrix();
	glTranslatef((3.0 / 2.0)*a, (9.0 / 4.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	arch((3.0 / 2.0)  * a, (1.0 / 4.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	door((1.0 / 8.0)*a, (3.0 / 2.0) * a);
	glPopMatrix();

	//����������a
	glPushMatrix();
	glTranslatef((7.0 / 4.0)*a, (71.0 / 40.0)*a, (1.0 / 18.0)*a);
	arch(1.0  * a, (1.0 / 5.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	door((1.0 / 8.0)*a, 1.0 * a);
	glPopMatrix();

	//����������b
	glPushMatrix();
	glTranslatef((5.0 / 4.0)*a, (71.0 / 40.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	arch(1.0  * a, (1.0 / 5.0)*a, (1.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture5);
	door((1.0 / 10.0)*a, 1.0*a);
	glPopMatrix();

	//�γ��W���곻
	//�ݪ����@��
	glPushMatrix();
	//glTranslatef(0.0, 2 * a, 0.0);
	glTranslatef((3.0 / 2.0)*a, (9.0 / 4.0)*a, 0.0);
	glBindTexture(GL_TEXTURE_2D, texture);
	arc((1.0 / 2.0)*a, (3.0 / 2.0)*a);
	glPopMatrix();

	//�γ��W���곻
	//����@��
	glPushMatrix();
	//glTranslatef(0.0, 2 * a, 0.0);
	glRotatef(90.0, 0.0f, 1.0f, 0.0f);
	glTranslatef((3.0 / 4.0)*a, (9.0 / 4.0)*a, 3.0*a);
	glBindTexture(GL_TEXTURE_2D, texture);
	arc((1.0 / 2.0)*a, 3.0 *a);
	glPopMatrix();


	//�γ������Ĥ@�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((3.0 / 2.0)*a, -(3.0 / 4.0)*a, -(5.0 / 2.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 4.0)*a, (7.0 / 12.0)*a);
	glPopMatrix();

	//�γ������ĤG�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((3.0 / 2.0)*a, -(3.0 / 4.0)*a, -(37.0 / 12.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 6.0)*a, (1.0 / 3.0)*a);
	glPopMatrix();

	//�γ�����1���Ĥ@�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((1.0 / 8.0)*a, -(1.0 / 8.0)*a, -(5.0 / 2.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����1���ĤG�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((1.0 / 8.0)*a, -(1.0 / 8.0)*a, -(49.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*(2.0 / 3.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����2���Ĥ@�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((23.0 / 8.0)*a, -(1.0 / 8.0)*a, -(5.0 / 2.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����2���ĤG�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((23.0 / 8.0)*a, -(1.0 / 8.0)*a, -(49.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*(2.0 / 3.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����3���Ĥ@�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((23.0 / 8.0)*a, -(11.0 / 8.0)*a, -(5.0 / 2.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����3���ĤG�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((23.0 / 8.0)*a, -(11.0 / 8.0)*a, -(49.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*(2.0 / 3.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����4���Ĥ@�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((1.0 / 8.0)*a, -(11.0 / 8.0)*a, -(5.0 / 2.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();

	//�γ�����4���ĤG�h��W
	glPushMatrix();
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glTranslatef((1.0 / 8.0)*a, -(11.0 / 8.0)*a, -(49.0 / 18.0)*a);
	glBindTexture(GL_TEXTURE_2D, texture3);
	column((1.0 / 8.0)*(2.0 / 3.0)*a, (2.0 / 9.0)*a);
	glPopMatrix();
	//Onion
	//center�v��
	glPushMatrix();
	glTranslatef((3.0 / 2.0*a), (41.0 / 12.0)*a, -(3.0 / 4.0)*a);
	float InitialShape01[][3] = { { 0, 0, 0 },{ (2.0 / 48.0)*oniona, (1.0 / 270.0)*oniona, 0 },{ (4.0 / 48.0)*oniona, (3.0 / 270.0)*oniona, 0 },{ (6.0 / 48.0)*oniona, (7.5 / 270.0)*oniona, 0 },{ (6.5 / 48.0)*oniona, (10.0 / 270.0)*oniona, 0 },{ (6.9 / 48.0)*oniona, (14.0 / 270.0)*oniona, 0 },{ (7.22 / 48.0)*oniona, (20.0 / 270.0)*oniona, 0 },{ (7.11 / 48.0)*oniona, (23.4 / 270.0)*oniona, 0 },{ (7.0 / 48.0)*oniona, (26.3 / 270.0)*oniona, 0 },{ (6.0 / 48.0)*oniona, (31.0 / 270.0)*oniona, 0 },{ (4.0 / 48.0)*oniona, (34.3 / 270.0)*oniona, 0 },{ (3.0 / 48.0)*oniona, (38.0 / 270.0)*oniona, 0 },{ (2.0 / 48.0)*oniona, (43.0 / 270.0)*oniona, 0 },{ (1.1 / 48.0)*oniona, (50.0 / 270.0)*oniona, 0 },{ (0.2 / 48.0)*oniona, (60.0 / 270.0)*oniona, 0 },{ (0.2 / 48.0)*oniona, (69.0 / 270.0)*oniona, 0 },{ 0, (73.0 / 270.0)*oniona, 0 } };
	glBindTexture(GL_TEXTURE_2D, texture7);
	RotateShape(36, InitialShape01, 16);//16??,17���I

										//1���v��
	glTranslatef(-(11.0 / 8.0*a), -(17.0 / 36.0)*a, (5.0 / 8.0)*a);
	float InitialShape02[][3] = { { 0, 0, 0 },{ (2.0 / 48.0)*a, (1.0 / 270.0)*a, 0 },{ (4.0 / 48.0)*a, (3.0 / 270.0)*a, 0 },
	{ (6.0 / 48.0)*a, (7.5 / 270.0)*a, 0 },{ (6.5 / 48.0)*a, (10.0 / 270.0)*a, 0 },
	{ (6.9 / 48.0)*a, (14.0 / 270.0)*a, 0 },{ (7.22 / 48.0)*a, (20.0 / 270.0)*a, 0 },
	{ (7.11 / 48.0)*a, (23.4 / 270.0)*a, 0 },{ (7.0 / 48.0)*a, (26.3 / 270.0)*a, 0 },{ (6.0 / 48.0)*a, (31.0 / 270.0)*a, 0 },
	{ (4.0 / 48.0)*a, (34.3 / 270.0)*a, 0 },{ (3.0 / 48.0)*a, (38.0 / 270.0)*a, 0 },{ (2.0 / 48.0)*a, (43.0 / 270.0)*a, 0 },{ (1.1 / 48.0)*a, (50.0 / 270.0)*a, 0 },
	{ (0.2 / 48.0)*a, (60.0 / 270.0)*a, 0 },{ (0.2 / 48.0)*a, (69.0 / 270.0)*a, 0 },{ 0, (73.0 / 270.0)*a, 0 } };
	glBindTexture(GL_TEXTURE_2D, texture6);
	RotateShape(36, InitialShape02, 16);//16??,17���I

										//4���v��
	glTranslatef(0.0, 0.0, -(5.0 / 4.0)*a);
	float InitialShape03[][3] = { { 0, 0, 0 },{ (2.0 / 48.0)*a, (1.0 / 270.0)*a, 0 },{ (4.0 / 48.0)*a, (3.0 / 270.0)*a, 0 },
	{ (6.0 / 48.0)*a, (7.5 / 270.0)*a, 0 },{ (6.5 / 48.0)*a, (10.0 / 270.0)*a, 0 },
	{ (6.9 / 48.0)*a, (14.0 / 270.0)*a, 0 },{ (7.22 / 48.0)*a, (20.0 / 270.0)*a, 0 },
	{ (7.11 / 48.0)*a, (23.4 / 270.0)*a, 0 },{ (7.0 / 48.0)*a, (26.3 / 270.0)*a, 0 },{ (6.0 / 48.0)*a, (31.0 / 270.0)*a, 0 },
	{ (4.0 / 48.0)*a, (34.3 / 270.0)*a, 0 },{ (3.0 / 48.0)*a, (38.0 / 270.0)*a, 0 },{ (2.0 / 48.0)*a, (43.0 / 270.0)*a, 0 },{ (1.1 / 48.0)*a, (50.0 / 270.0)*a, 0 },
	{ (0.2 / 48.0)*a, (60.0 / 270.0)*a, 0 },{ (0.2 / 48.0)*a, (69.0 / 270.0)*a, 0 },{ 0, (73.0 / 270.0)*a, 0 } };
	glBindTexture(GL_TEXTURE_2D, texture6);
	RotateShape(36, InitialShape03, 16);//16??,17���I

										//3���v��
	glTranslatef((11.0 / 4.0)*a, 0.0, 0.0);
	float InitialShape04[][3] = { { 0, 0, 0 },{ (2.0 / 48.0)*a, (1.0 / 270.0)*a, 0 },{ (4.0 / 48.0)*a, (3.0 / 270.0)*a, 0 },
	{ (6.0 / 48.0)*a, (7.5 / 270.0)*a, 0 },{ (6.5 / 48.0)*a, (10.0 / 270.0)*a, 0 },
	{ (6.9 / 48.0)*a, (14.0 / 270.0)*a, 0 },{ (7.22 / 48.0)*a, (20.0 / 270.0)*a, 0 },
	{ (7.11 / 48.0)*a, (23.4 / 270.0)*a, 0 },{ (7.0 / 48.0)*a, (26.3 / 270.0)*a, 0 },{ (6.0 / 48.0)*a, (31.0 / 270.0)*a, 0 },
	{ (4.0 / 48.0)*a, (34.3 / 270.0)*a, 0 },{ (3.0 / 48.0)*a, (38.0 / 270.0)*a, 0 },{ (2.0 / 48.0)*a, (43.0 / 270.0)*a, 0 },{ (1.1 / 48.0)*a, (50.0 / 270.0)*a, 0 },
	{ (0.2 / 48.0)*a, (60.0 / 270.0)*a, 0 },{ (0.2 / 48.0)*a, (69.0 / 270.0)*a, 0 },{ 0, (73.0 / 270.0)*a, 0 } };
	glBindTexture(GL_TEXTURE_2D, texture6);
	RotateShape(36, InitialShape04, 16);//16??,17���I

										//2���v��
	glTranslatef(0.0, 0.0, (5.0 / 4.0)*a);
	float InitialShape05[][3] = { { 0, 0, 0 },{ (2.0 / 48.0)*a, (1.0 / 270.0)*a, 0 },{ (4.0 / 48.0)*a, (3.0 / 270.0)*a, 0 },
	{ (6.0 / 48.0)*a, (7.5 / 270.0)*a, 0 },{ (6.5 / 48.0)*a, (10.0 / 270.0)*a, 0 },
	{ (6.9 / 48.0)*a, (14.0 / 270.0)*a, 0 },{ (7.22 / 48.0)*a, (20.0 / 270.0)*a, 0 },
	{ (7.11 / 48.0)*a, (23.4 / 270.0)*a, 0 },{ (7.0 / 48.0)*a, (26.3 / 270.0)*a, 0 },{ (6.0 / 48.0)*a, (31.0 / 270.0)*a, 0 },
	{ (4.0 / 48.0)*a, (34.3 / 270.0)*a, 0 },{ (3.0 / 48.0)*a, (38.0 / 270.0)*a, 0 },{ (2.0 / 48.0)*a, (43.0 / 270.0)*a, 0 },{ (1.1 / 48.0)*a, (50.0 / 270.0)*a, 0 },
	{ (0.2 / 48.0)*a, (60.0 / 270.0)*a, 0 },{ (0.2 / 48.0)*a, (69.0 / 270.0)*a, 0 },{ 0, (73.0 / 270.0)*a, 0 } };
	glBindTexture(GL_TEXTURE_2D, texture6);
	RotateShape(36, InitialShape05, 16);//16??,17���I
	glPopMatrix();

}