#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, " ");

    setcolor(YELLOW);
    circle(300, 300, 100);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(301, 301, YELLOW);

    getchar();
    return 0;
}