#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    line(100, 200, 150, 50);
    line(100, 200, 200, 200);
    line(150, 50, 200, 200);
    floodfill(150, 150, GREEN);

    setcolor(RED);
    rectangle(140, 200, 160, 300);
    setfillstyle(SOLID_FILL, RED);
    floodfill(141, 201, RED);

    getchar();
    closegraph();
    return 0;
}