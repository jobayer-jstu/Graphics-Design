#include<graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(50,50,25);
	floodfill(50,50,RED);

	setcolor(GREEN);
	setfillstyle(CLOSE_DOT_FILL,GREEN);
	circle(100,50,25);
	floodfill(100,50,GREEN);

	setcolor(BLUE);
	setfillstyle(WIDE_DOT_FILL,BLUE);
	circle(150,50,25);
	floodfill(150,50,BLUE);

	setcolor(YELLOW);
	setfillstyle(INTERLEAVE_FILL,YELLOW);
	circle(200,50,25);
	floodfill(200,50,YELLOW);

	setcolor(CYAN);
	setfillstyle(XHATCH_FILL,CYAN);
	circle(250,50,25);
	floodfill(250,50,CYAN);

	setcolor(LIGHTBLUE);
	setfillstyle(HATCH_FILL,LIGHTBLUE);
	circle(300,50,25);
	floodfill(300,50,LIGHTBLUE);

	setcolor(LIGHTGRAY);
	setfillstyle(LTBKSLASH_FILL,LIGHTGRAY);
	circle(350,50,25);
	floodfill(350,50,LIGHTGRAY);

	setcolor(MAGENTA);
	setfillstyle(SLASH_FILL,MAGENTA);
	circle(400,50,25);
	floodfill(400,50,MAGENTA);

	setcolor(LIGHTGREEN);
	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
	circle(450,50,25);
	floodfill(450,50,LIGHTGREEN);


	getchar();
    return 0;
}