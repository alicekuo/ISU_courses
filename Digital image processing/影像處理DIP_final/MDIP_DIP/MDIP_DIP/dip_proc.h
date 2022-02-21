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

void Lrotation(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[w-1-(i/h) + (i % w) * h];
	/*
	for (int i = 0; i < w; i++)
	for (int j = 0; j < h; j++)
	g[i * w + j] = f[i + (h - 1 - j)*h];*/
}

void Rotation_T(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[w*h - 1 - i];
	/*
	for (int i = 0; i < w; i++)
	for (int j = 0; j < h; j++)
	g[i * w + j] = f[(w - 1 - i)*w + h-1-j];
	*/
}

void Rotation_Horizontal(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[w - 1 - (i % h) + (i / w) * h];

	/*
	for (int i = 0; i < w; i++)
	for (int j = 0; j < h; j++)
	g[i * w + j] = f[i*w + h - 1 - j];
	*/
}

void Rotation_Vertical(int *f, int w, int h, int *g)
{
	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = f[w*h - h - (i / w)*h + (i % w)];

	/*
	for (int i = 0; i < w; i++)
	for (int j = 0; j < h; j++)
	g[i * w + j] = f[i*w + h - 1 - j];
	*/
}

void bitplane(int *f, int w, int h, int *g, int bit)
{

	for (int i = 0; i < w*h; i++)
		g[(i / w) * h + i % w] = ((int)((float)f[(i / w) * h + i % w] / bit + 0.5) % 2) * 255;

}

void brightness(int *f, int w, int h, int *g, int value)
{
	for (int i = 0; i < w*h; i++)
	{
		if (value >= 0)
			g[(i / w) * h + i % w] = (int)(((255 - value / 100 * 255) / 255)*f[(i / w) * h + i % w] + 255 - ((255 - (double)value / 100 * 255) / 255) * 255);
		else
			g[(i / w) * h + i % w] = (int)(((255 + (double)value / 100 * 255) / 255)*f[(i / w) * h + i % w] + (255 + (double)value / 100 * 255) - ((255 + (double)value / 100 * 255) / 255) * 255);

		if (g[(i / w) * h + i % w] > 255)
			g[(i / w) * h + i % w] = 255;
		if (g[(i / w) * h + i % w] < 0)
			g[(i / w) * h + i % w] = 0;
	}
}

void contrast(int *f, int w, int h, int *g, int value)
{
	for (int i = 0; i < w*h; i++)
	{
		if (value >= 0)
			g[(i / w) * h + i % w] = (int)((255 / (256 - (double)value / 100 * 255))*f[(i / w) * h + i % w] + 255 - (255 / (256 - (double)value / 100 * 255)) * (255 - (double)value / 100 * 255 / 2));
		else
			g[(i / w) * h + i % w] = (int)(((255 + (double)value / 100 * 255) / 255)*f[(i / w) * h + i % w] + (255 + (double)value / 100 * 255 / 2) - ((255 + (double)value / 100 * 255) / 255) * 255);

		if (g[(i / w) * h + i % w] > 255)
			g[(i / w) * h + i % w] = 255;
		if (g[(i / w) * h + i % w] < 0)
			g[(i / w) * h + i % w] = 0;
	}
}

void histogram(int *f, int w, int h, int *g) {
	int graylevel[256] = { 0 };
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
	{
		if (graylevel[i]>256 * 4)
			graylevel[i] = 256 * 4;
		graylevel[i] = (int)(graylevel[i] / 4);
	}

	for (int i = 0; i < w*h; i++)
	{
		g[(i / w) * h + i % w] = 255;
	}

	for (int i = 0; i < w; i++)
	{
		for (int j = (256 * 255); graylevel[i] != 0; graylevel[i]--, j -= 256)
			g[i + j] = 200;
	}
}

void Scale_Calculate(int *f, int fw, int fh, int gw, int gh, int *g) {

	int x = 0, y = 0;
	float alpha = 0, beta = 0;
	for (int i = 0; i < gw; i++)
		for (int j = 0; j < gh; j++) {

			x = (int)((i*1.0)*(fw - 1) / (gw - 1));
			y = (int)(j*1.0)*(fh - 1) / (gh - 1);
			alpha = (float)((j*1.0)*(fh - 1) / (gh - 1) - y);
			beta = (float)((i*1.0)*(fw - 1) / (gw - 1) - x);
			if ((y + 1)>255)
				y--;
			if ((x + 1) > 255)
				x--;
			g[i*gh + j] = (int)((1 - beta) * (alpha * f[x*fh + y + 1] + (1 - alpha)*f[x*fh + y]) +
				beta * (alpha*f[(x + 1)* fh + y + 1] + (1 - alpha)*f[(x + 1) * fh + y]));
		}

	/* 演算法
	for xp = 1:gm
	for yp = 1 : gn
	x = (xp - 1)*(fm - 1) / (gm - 1) + 1;
	y = (yp - 1)*(fn - 1) / (gn - 1) + 1;
	alpha = y - floor(y);
	beta = x - floor(x);
	x = floor(x);
	y = floor(y);
	g(xp, yp) = (1 - beta) * (alpha*f(x, y + 1) + (1 - alpha)*f(x, y)) + beta * (alpha*f(x + 1, y + 1) + (1 - alpha)*f(x + 1, y));
	end
	end
	*/
}

void average(int *f, int w, int h, int *g)
{
	//邊緣處理
	int *graylevel = new int[(w + 2)*(h + 2)];
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			graylevel[(i + 1) * (w + 2) + j + 1] = f[i*w + j];
	for (int i = 0; i < w; i++)
	{
		graylevel[(i + 1)*(w + 2)] = graylevel[(i + 1)*(w + 2) + 1];
		graylevel[(i + 1)*(w + 2) - 1] = graylevel[(i + 1)*(w + 2) - 2];
	}
	for (int i = 0; i < w + 2; i++)
	{
		graylevel[i] = graylevel[i + (w + 2)];
		graylevel[i + (w + 2)*(w + 1)] = graylevel[i + (w + 2)*w];
	}
	//套用mask
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
		{
			/*重點*/		g[i*w + j] = (int)(graylevel[i * (w + 2) + j] / 9.0 + graylevel[i * (w + 2) + j + 1] / 9.0 + graylevel[i * (w + 2) + j + 2] / 9.0 +			//
				/*重點*/			graylevel[(i + 1) * (w + 2) + j] / 9.0 + graylevel[(i + 1) * (w + 2) + j + 1] / 9.0 + graylevel[(i + 1) * (w + 2) + j + 2] / 9.0 +		//
				/*重點*/			graylevel[(i + 2) * (w + 2) + j] / 9.0 + graylevel[(i + 2) * (w + 2) + j + 1] / 9.0 + graylevel[(i + 2) * (w + 2) + j + 2] / 9.0 + 0.5);//
																																										//預防超過邊界
			if (g[i*w + j] > 255)
				g[i*w + j] = 255;
			if (g[i*w + j] < 0)
				g[i*w + j] = 0;
		}
}

void Gaussian(int *f, int w, int h, int *g)
{
	//邊緣處理
	int *graylevel = new int[(w + 2)*(h + 2)];
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			graylevel[(i + 1) * (w + 2) + j + 1] = f[i*w + j];
	for (int i = 0; i < w; i++)
	{
		graylevel[(i + 1)*(w + 2)] = graylevel[(i + 1)*(w + 2) + 1];
		graylevel[(i + 1)*(w + 2) - 1] = graylevel[(i + 1)*(w + 2) - 2];
	}
	for (int i = 0; i < w + 2; i++)
	{
		graylevel[i] = graylevel[i + (w + 2)];
		graylevel[i + (w + 2)*(w + 1)] = graylevel[i + (w + 2)*w];
	}
	//套用mask
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
		{
			/*重點*/ g[i*w + j] = (int)(graylevel[i*(w + 2) + j] * 0.0625 + graylevel[i * (w + 2) + j + 1] * 0.125 + graylevel[i * (w + 2) + j + 2] * 0.0625 +   //
				/*重點*/        graylevel[(i + 1) * (w + 2) + j] * 0.125 + graylevel[(i + 1) * (w + 2) + j + 1] * 0.25 + graylevel[(i + 1) * (w + 2) + j + 2] * 0.125 +  //
				/*重點*/        graylevel[(i + 2) * (w + 2) + j] * 0.0625 + graylevel[(i + 2) * (w + 2) + j + 1] * 0.125 + graylevel[(i + 2) * (w + 2) + j + 2] * 0.0625 + 0.5);//
																																											  //預防超過邊界
			if (g[i*w + j] > 255)
				g[i*w + j] = 255;
			if (g[i*w + j] < 0)
				g[i*w + j] = 0;
		}
}

void edge_enhancement(int *f, int w, int h, int *g)
{
	//邊緣處理
	int *graylevel = new int[(w + 2)*(h + 2)];
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			graylevel[(i + 1) * (w + 2) + j + 1] = f[i*w + j];
	for (int i = 0; i < w; i++)
	{
		graylevel[(i + 1)*(w + 2)] = graylevel[(i + 1)*(w + 2) + 1];
		graylevel[(i + 1)*(w + 2) - 1] = graylevel[(i + 1)*(w + 2) - 2];
	}
	for (int i = 0; i < w + 2; i++)
	{
		graylevel[i] = graylevel[i + (w + 2)];
		graylevel[i + (w + 2)*(w + 1)] = graylevel[i + (w + 2)*w];
	}
	//套用mask
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
		{
			/*重點*/		g[i*w + j] = (int)(graylevel[i * (w + 2) + j] * -0.3333 + graylevel[i * (w + 2) + j + 1] * -0.3333 + graylevel[i * (w + 2) + j + 2] * -0.3333 +			//
				/*重點*/			graylevel[(i + 1) * (w + 2) + j] * -0.3333 + graylevel[(i + 1) * (w + 2) + j + 1] * 3.6667 + graylevel[(i + 1) * (w + 2) + j + 2] * -0.3333 +		//
				/*重點*/			graylevel[(i + 2) * (w + 2) + j] * -0.3333 + graylevel[(i + 2) * (w + 2) + j + 1] * -0.3333 + graylevel[(i + 2) * (w + 2) + j + 2] * -0.3333 + 0.5);//
																																													//預防超過邊界
			if (g[i*w + j] > 255)
				g[i*w + j] = 255;
			if (g[i*w + j] < 0)
				g[i*w + j] = 0;

		}
}
void Sobel(int *f, int w, int h, int *g)
{
	//邊緣處理
	int *a = new int[w*h];
	int *b = new int[w*h];
	int *graylevel = new int[(w + 2)*(h + 2)];
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			graylevel[(i + 1) * (w + 2) + j + 1] = f[i*w + j];
	for (int i = 0; i < w; i++)
	{
		graylevel[(i + 1)*(w + 2)] = graylevel[(i + 1)*(w + 2) + 1];
		graylevel[(i + 1)*(w + 2) - 1] = graylevel[(i + 1)*(w + 2) - 2];
	}
	for (int i = 0; i < w + 2; i++)
	{
		graylevel[i] = graylevel[i + (w + 2)];
		graylevel[i + (w + 2)*(w + 1)] = graylevel[i + (w + 2)*w];
	}
	//套用mask
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
		{
			a[i *w + j] = (int)(graylevel[i * (w + 2) + j] * 1 + graylevel[i * (w + 2) + j + 1] * 2 + graylevel[i * (w + 2) + j + 2] * 1 +
				graylevel[(i + 1) * (w + 2) + j] * 0 + graylevel[(i + 1) * (w + 2) + j + 1] * 0 + graylevel[(i + 1) * (w + 2) + j + 2] * 0 +
				graylevel[(i + 2) * (w + 2) + j] * -1 + graylevel[(i + 2) * (w + 2) + j + 1] * -2 + graylevel[(i + 2) * (w + 2) + j + 2] * -1 + 0.5);
			if (a[i*w + j] < 0)
				a[i*w + j] = -a[i*w + j];
			if (a[i*w + j] > 255)
				a[i*w + j] = 255;

			b[i *w + j] = (int)(graylevel[i * (w + 2) + j] * -1 + graylevel[i * (w + 2) + j + 1] * 0 + graylevel[i * (w + 2) + j + 2] * 1 +
				graylevel[(i + 1) * (w + 2) + j] * -2 + graylevel[(i + 1) * (w + 2) + j + 1] * 0 + graylevel[(i + 1) * (w + 2) + j + 2] * 2 +
				graylevel[(i + 2) * (w + 2) + j] * -1 + graylevel[(i + 2) * (w + 2) + j + 1] * 0 + graylevel[(i + 2) * (w + 2) + j + 2] * 1 + 0.5);
			if (b[i*w + j] < 0)
				b[i*w + j] = -b[i*w + j];
			if (b[i*w + j] > 255)
				b[i*w + j] = 255;

			g[i *w + j] = a[i *w + j] + b[i *w + j];
			if (g[i*w + j] > 255)
				g[i*w + j] = 255;
			if (g[i*w + j] < 0)
				g[i*w + j] = 0;
		}
}

void prewitt(int *f, int w, int h, int *g) {

	//邊緣處理
	int *a = new int[w*h];
	int *b = new int[w*h];
	int *graylevel = new int[(w + 2)*(h + 2)];
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			graylevel[(i + 1) * (w + 2) + j + 1] = f[i*w + j];
	for (int i = 0; i < w; i++)
	{
		graylevel[(i + 1)*(w + 2)] = graylevel[(i + 1)*(w + 2) + 1];
		graylevel[(i + 1)*(w + 2) - 1] = graylevel[(i + 1)*(w + 2) - 2];
	}
	for (int i = 0; i < w + 2; i++)
	{
		graylevel[i] = graylevel[i + (w + 2)];
		graylevel[i + (w + 2)*(w + 1)] = graylevel[i + (w + 2)*w];
	}
	//套用mask

	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
		{
			a[i *w + j] = (int)(graylevel[i * (w + 2) + j] * (-1) + graylevel[i * (w + 2) + j + 1] * (0) + graylevel[i * (w + 2) + j + 2] * (1) +
				graylevel[(i + 1) * (w + 2) + j] * (-1) + graylevel[(i + 1) * (w + 2) + j + 1] * (0) + graylevel[(i + 1) * (w + 2) + j + 2] * (1) +
				graylevel[(i + 2) * (w + 2) + j] * (-1) + graylevel[(i + 2) * (w + 2) + j + 1] * (0) + graylevel[(i + 2) * (w + 2) + j + 2] * (1));
			if (a[i*w + j] < 0)
				a[i*w + j] = -a[i*w + j];
			if (a[i*w + j] > 255)
				a[i*w + j] = 255;

			b[i *w + j] = (int)(graylevel[i * (w + 2) + j] * (1) + graylevel[i * (w + 2) + j + 1] * (1) + graylevel[i * (w + 2) + j + 2] * (1) +
				graylevel[(i + 1) * (w + 2) + j] * (0) + graylevel[(i + 1) * (w + 2) + j + 1] * (0) + graylevel[(i + 1) * (w + 2) + j + 2] * (0) +
				graylevel[(i + 2) * (w + 2) + j] * (-1) + graylevel[(i + 2) * (w + 2) + j + 1] * (-1) + graylevel[(i + 2) * (w + 2) + j + 2] * (-1));
			if (b[i*w + j] < 0)
				b[i*w + j] = -b[i*w + j];
			if (b[i*w + j] > 255)
				b[i*w + j] = 255;

			g[i *w + j] = a[i *w + j] + b[i *w + j];
			if (g[i*w + j] > 255)
				g[i*w + j] = 255;
			if (g[i*w + j] < 0)
				g[i*w + j] = 0;
		}

}