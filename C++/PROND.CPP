#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int ct=0;

/*
void grass()
{
	setcolor(LIGHTGREEN);
	rectangle(1,380,638,479);
	setfillstyle(2,LIGHTGREEN);
	floodfill(500,400,LIGHTGREEN);
	//rectangle(340,300,638,479);
	//setfillstyle(2,LIGHTGRAY);
	//floodfill(400,400,LIGHTGRAY);
}*/

//1st CLOUD

void drawfish(int x,int l)
{
setcolor(WHITE);
ellipse(x,320,0,360,80,40);
if(l<=10&&l>=0)
ellipse(x,320,0,180,30,l);
else
ellipse(x,320,180,0,30,(l*-1));
line(x-80,320,x-100,305);
line(x-80,320,x-100,335);
line(x-100,305,x-100,335);
line(x+80,320,x+50,320);
fillellipse(x+50,300,3,2);
  setfillstyle(1,WHITE);
    //	floodfill(x,305,LIGHTBLUE);

}

void pond()
{

	setcolor(BLUE);
	arc(0,500,0,200,320);
	setfillstyle(1,BLUE);
	floodfill(50,400,BLUE);
}

void firstCloud()
{
	setcolor(LIGHTBLUE);
	arc(70,70,90,200,20);
	arc(90,50,45,180,20);
	arc(110,50,0,120,20);
	arc(130,70,-25,120,20);
	arc(67,80,150,-90,15);
	arc(87,90,195,-64,20);
	arc(107,90,225,-40,20);
	arc(127,80,260,10,23);
	setfillstyle(1,LIGHTBLUE);
	floodfill(80,80,LIGHTBLUE);
}

//2nd CLOUD

/*void secondCloud()
{
	setcolor(DARKGRAY);
	arc(405,115,120,280,20);
	arc(400,80,80,250,20);
	arc(420,50,60,205,20);
	arc(440,50,0,120,20);
	line(395,150,445,10);
	setfillstyle(1,DARKGRAY);
	floodfill(410,80,DARKGRAY);

}  */

//MOUNTAIN

void mountain()
{
	setcolor(BROWN);
	line(0,150,200,150);
	line(200,150,90,50);
	line(90,50,0,150);
	setfillstyle(9,BROWN);
	floodfill(100,100,BROWN);
	line(150,110,250,30);
	line(250,30,300,150);
	line(200,150,300,150);
	setfillstyle(9,BROWN);
	floodfill(200,125,BROWN);
	line(300,150,350,30);
	line(300,150,400,150);
	line(400,150,350,30);
	setfillstyle(9,BROWN);
	floodfill(350,125,BROWN);
	line(400,150,550,150);
	line(400,150,450,10);
	line(450,10,550,150);
	setfillstyle(9,BROWN);
	floodfill(450,125,BROWN);
}

//SUN

void sun()
{
	arc(550,50,0,360,30);
	setfillstyle(1,YELLOW);
	floodfill(550,50,BROWN);
	setcolor(YELLOW);
	line(580,50,590,50);
	line(520,50,510,50);
	line(550,20,550,8);
	line(565,35,580,20);
	line(535,35,520,20);
	line(550,80,550,92);
	line(565,65,580,80);
	line(535,65,520,80);
    //	line(320,95,335,40);

	setcolor(BROWN);
	line(550,150,635,150);
	line(635,150,635,20);
	line(635,20,550,150);
	setfillstyle(9,BROWN);
	floodfill(600,125,BROWN);
}

void all()
{
	firstCloud(); //1st CLOUD

       //	secondCloud(); //2nd CLOUD

	mountain(); //MOUNTAIN

	sun(); //SUN


      pond();


      //	stones(x,y);//STONES



}
void motion()
{
	int l=10;
      int flag=0;
for(int i=0;i<=150;i++)
{
all();
drawfish(i,l);
if(l==10)
flag=0;
if(flag==0&&l>-10)
l--;
if(l==-10)
flag=1;//down
if(flag==1&&l<=10)
{
l++;
}
delay(50);
cleardevice();
}
}

void main()
{

	int gdriver = DETECT, gmode;
	//int i,j;
	initgraph(&gdriver, &gmode, "..\\bgi");
	int mat[3][3];

	setcolor(LIGHTBLUE); //3rd RECTANGLE
	rectangle(1,1,638,479);
	motion();
       //	grass(); //GRASS

	setcolor(9);
       delay(500);

	getch();
	closegraph();
}