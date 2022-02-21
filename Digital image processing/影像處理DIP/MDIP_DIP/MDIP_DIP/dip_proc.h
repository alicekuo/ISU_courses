#include "image_lib.h"

void encode(int *f,int w,int h,int *g)
{
    int i0,j0;
    int *b,wb,hb;
   
    wb=w/4;
    hb=h/4;
    b=new int[wb*hb];

    i0=w/4;
	j0=h/4;

	block_get(f,w,h,b,wb,hb,i0,j0);
	contrast(b,wb,hb,1.5);
	copy(f,w,h,g);
	block_put(b,wb,hb,g,w,h,i0,j0);
}


void negative(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w)*h + i%w] = 255 - f[(i / w)*h + i%w];
}

void Curve(int *f, int w, int h, int *g)
{
	int x0 = 0, y0 = 0, x1 = 255, y1 = 255;


	for (int i = 0; i < w*h; i++)
	{
		g[(i / w) * h + i % w] = ((y1 - y0) / (x1 - x0))*f[(i / w) * h + i % w] + y1 - ((y1 - y0) / (x1 - x0))*x1;
		if (g[(i / w) * h + i % w]>255)
			g[(i / w) * h + i % w] = 255;
		if (g[(i / w) * h + i % w] < 0)
			g[(i / w) * h + i % w] = 0;
	}
}

void twocolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++) {
		if (f[(i / w) * h + i % w]>128)
			g[(i / w) * h + i % w] = 255;
		else
			g[(i / w) * h + i % w] = 0;
	}
		
}

void fourcolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++) 
		g[(i / w) * h + i % w] = f[(i / w) * h + i % w] - (f[(i / w) * h + i % w] % 64);
}

void eightcolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[(i / w) * h + i % w] - (f[(i / w) * h + i % w] % 32);

}

void sixteencolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[(i / w) * h + i % w] - (f[(i / w) * h + i % w] % 16);

}

void threetwocolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[(i / w) * h + i % w] - (f[(i / w) * h + i % w] % 8);

}

void sixfourcolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[(i / w) * h + i % w] - (f[(i / w) * h + i % w] % 4);

}

void onetwoeightcolor(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[(i / w) * h + i % w] - (f[(i / w) * h + i % w] % 2);

}

void brightup(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		

		{
			if (f[(i / w) * h + i % w] < 150)
				g[(i / w) * h + i % w] =(double) f[(i / w) * h + i % w] * 1.2;
			else
				g[(i / w) * h + i % w] = (double)((f[(i / w) * h + i % w] - 150)*0.71) + 180;
		}

}

void brightdown(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
	{
		if (f[(i / w) * h + i % w] < 150)
			g[(i / w) * h + i % w] = (double)f[(i / w) * h + i % w] * 0.8;
		else
			g[(i / w) * h + i % w] = (double)((f[(i / w) * h + i % w] - 150)*1.28) + 120;
	}

}

void  HistogramEqualization(int *f, int w, int h, int *g)
{
	
//	for (int i = 0; i < w; i++)
//		g[i] = new int[h];


	float graylevel[256] = { 0 };
	int temp;

	for (int i = 0; i < w*h; i++)
		{
			g[(i / w) * h + i % w] = f[(i / w) * h + i % w];
		}
	for (int i = 0; i < w*h; i++)

		{
			temp = g[(i / w) * h + i % w];
			graylevel[temp]++;
		}
	for (int i = 0; i < 256; i++)
		graylevel[i] = (graylevel[i] / (w*h));  // probability of each intensiity level
	for (int i = 1; i < 256; i++)
		graylevel[i] = graylevel[i] + graylevel[i - 1];   // P.D.F. of intensity level
	for (int i = 0; i < 256; i++)
		graylevel[i] = graylevel[i] * 255;

	for (int i = 0; i < w*h; i++)
		
		{
			temp = g[(i / w) * h + i % w];
			g[(i / w) * h + i % w] = int(graylevel[temp]);;
		}
}

void Rrotation(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[((w*h - h - (i%h)*h) / w) * h + (i / h) % w];
	/*
	for (int i = 0; i < w; i++)
	for (int j = 0; j < h; j++)
	g[i * w + j] = f[i + (h - 1 - j)*h];*/
}

/*void Lrotation(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[((w*h - h + (i%h)*h) / w) * h + (i / h) % w];

}*/