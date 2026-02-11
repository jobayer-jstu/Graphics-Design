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
    rectangle(20, 30, 80, 90);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(21, 31, YELLOW);

    getchar();
    return 0;
}