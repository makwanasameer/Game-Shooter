#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void *rptr;
int l=0,m=0;
void main()
{
	int gd=DETECT,gm;
	void rect_display(void);
	clrscr();
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setcolor(5);
	circle(25,25,24);
	setfillstyle(9,GREEN);
	floodfill(25,25,5);
	void *ptr=malloc(imagesize(0,0,50,50));
	getimage(0,0,50,50,ptr);

	rectangle(100,100,110,110);
	rptr=malloc(imagesize(100,100,110,110));
	getimage(100,100,110,110,rptr);

	int i=0,j=0;
	while(1)
	{       setcolor(3);
		 rectangle(5,5,629,400);
		 rect_display();
		while(kbhit())
		{
			char ch=getch();
			switch(ch)
			{
				case 'a':putimage(i,j,ptr,XOR_PUT); 	i-=5;  	putimage(i,j,ptr,XOR_PUT);break;
				case 'd':putimage(i,j,ptr,XOR_PUT);	i+=5; 	putimage(i,j,ptr,XOR_PUT);break;
				case 'w':putimage(i,j,ptr,XOR_PUT);	j-=5;	putimage(i,j,ptr,XOR_PUT);break;
				case 'z':putimage(i,j,ptr,XOR_PUT);	j+=5;	putimage(i,j+=5,ptr,XOR_PUT);break;
				case 'p':exit(0);
			}
			ch='z';
		delay(20);


		}

	}
getch();
	closegraph();
}
void rect_display()
{       m=0;
	l=random(400);
	while(m<400)
	{

	putimage(l,m,rptr,XOR_PUT);
	m+=5;

	putimage(l,m,rptr,XOR_PUT);
	delay(10);
	}
}
