#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void motion(int midx,int midy,int x,int y)
{

setfillstyle(1,15);
pieslice(midx,midy,x+90,y+120,100);
floodfill(midx,midy,15);
	 delay(5);

/* setfillstyle(1, 2);
pieslice(midx,midy,x+180,y+210,100);
floodfill(midx,midy,15);
	 delay(5);      */

setfillstyle(1,15);
pieslice(midx,midy,x+210,y+240,100);
floodfill(midx,midy,15);
	delay(5);
/* setfillstyle(1, 4);
pieslice(midx,midy,x+0,y+30,100);
floodfill(midx,midy,15);
	 delay(5);     */

setfillstyle(1,15);
pieslice(midx,midy,x+330,y+360,100);
floodfill(midx,midy,15);
	   delay(5);
/* setfillstyle(1, 6);
pieslice(midx,midy,x+235,y+265,100);
floodfill(midx,midy,15);
	    delay(5);    */

}
void main()
{

int d,m;
int midx, midy;


	int gdriver = DETECT, gmode;
	//int i,j;
	initgraph(&gdriver, &gmode, "..\\bgi");

midx = getmaxx()/2;
midy = getmaxy()/2;
int x=0;
int y=0;
/* set fill style and draw pie slices */
for(int i=0;i<5;i++)
{
motion(midx,midy,x,y);
x=x+100;
y=y+100;
delay(500);
cleardevice();
}
getch();
closegraph();

}

