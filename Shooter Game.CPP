/*
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<alloc.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
int b,c;
int x=400;
int y=460;
int temp=0;
int l=0,flag=0;
int temp_villan=0;
int m=0;
char ch;
char str[20];
int total=0;
int *ptr;
int *ptr1;
int *ptr2;
void main()
{
	void godi(void);
	void roll(void);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);

	rectangle(1,1,maxx-1,maxy-1);
	line(5,5,5,10);
	ptr1=(int *)malloc(imagesize(5,5,5,10));   /*godi*/
	getimage(5,5,5,10,ptr1);
	line(2,50,20,50);
	ptr2=(int *)malloc(imagesize(2,50,20,50));          /*gundo*/
	getimage(2,50,20,50,ptr2);
     //	putimage(100,100,ptr1,XOR_PUT);
	setcolor(2);
	rectangle(5,5,20,20);
	setfillstyle(7,4);
	floodfill(11,11,2);

	ptr=(int *)malloc(imagesize(5,5,20,20));                   /*rect*/
	getimage(5,5,20,20,ptr);
	b=maxx-35;
	c=5;
	putimage(x,y,ptr,XOR_PUT);
	putimage(b,c,ptr2,XOR_PUT);
	while(1)
	{

		if(l>b&&l<b+18&&m<c)
		{       total++;
			sprintf(str,"Total :: %d",total);
			outtextxy(10,50,str);
		}
		putimage(b,c,ptr2,XOR_PUT);
		b-=7;
		if(b<0)
		{
			b=maxx-35;
		}
		roll();



		putimage(x,y,ptr,XOR_PUT);

		delay(20);
		putimage(x,y,ptr,XOR_PUT);
		if(ch=='p')
		{
				exit(0);
		}
		putimage(l,m,ptr1,XOR_PUT);
		if(temp>0)
		{       m-=10;
		     //	printf("sameer");

			putimage(l,m,ptr1,XOR_PUT);
		     //	delay(1);
		      //	putimage(l,m,ptr1,XOR_PUT);
		      if(m<0)
		      {
			temp=0;
		      }

		}
		if(kbhit())
		{
			ch=getch();
			if(ch=='t')
			{    //   if(temp==0)
				godi();

			     //	temp++;
			}
		   /*	while(ch=='t')
			{
				if(temp==0)
				{	temp++;

					l=x;
					m=y;
				}
				m-=3;

			    //  y-=3;
				putimage(l,m,ptr1,XOR_PUT);
				delay(30);
				putimage(l,m,ptr1,XOR_PUT);
				if(kbhit())
				{
					break;
				}
				ch='e';

			}  */


			while(ch=='a')
			{       x-=3;
				putimage(x,y,ptr,XOR_PUT);
				delay(30);
				putimage(x,y,ptr,XOR_PUT);
				if(kbhit())
				{
					break;
				}
				ch='e';
			}
			while(ch=='d')
			{       x+=3;
				putimage(x,y,ptr,XOR_PUT);
				delay(30);
				putimage(x,y,ptr,XOR_PUT);
				if(kbhit())
				{
					break;
				}
				ch='e';
			}
			while(ch=='w')
			{       y-=3;
				putimage(x,y,ptr,XOR_PUT);
				delay(30);
				putimage(x,y,ptr,XOR_PUT);
				if(kbhit())
				{
					break;
				}
				ch='e';
			}
			while(ch=='z')
			{       y+=3;
				putimage(x,y,ptr,XOR_PUT);
				delay(30);
				putimage(x,y,ptr,XOR_PUT);
				if(kbhit())
				{
					break;
				}
				ch='e';
			}
		}

	}
}
void godi(void)
{
	    //	while(ch=='t')
			{
				if(temp==0)
				{	temp++;

					l=x;
					m=y;

				m-=5;

			    //  y-=3;
				putimage(l,m,ptr1,XOR_PUT);
			   //	delay(30);
				putimage(l,m,ptr1,XOR_PUT);
			    /*	if(kbhit())
				{
					break;
				}  */
				ch='e';
				}
			}

}

void roll(void)
{
	putimage(b,c,ptr2,XOR_PUT);
}













