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
    setfillstyle(SOLID_FILL, YELLOW);
    line(50, 100, 100, 100);
    line(100, 100, 100, 50);
    line(50, 100, 100, 50);
    floodfill(80, 80, YELLOW);

    getchar();
    return 0;
}