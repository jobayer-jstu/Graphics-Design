#include <graphics.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int gd, gm;
    
    detectgraph(&gd, &gm);

    initgraph(&gd, &gm, " ");

    setcolor(YELLOW);

    circle(200, 70, 25);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(201, 71, YELLOW);

    circle(235, 60, 30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(241, 61, YELLOW);

    circle(225, 80, 30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(226, 91, YELLOW);

    circle(260, 70, 30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(261, 81, YELLOW);

    getchar();

    closegraph();
    return 0;
}