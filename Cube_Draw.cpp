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
    rectangle(50, 50, 200, 150);
    rectangle(100, 100, 250, 200);
    line(50, 50, 100, 100);
    line(200, 50, 250, 100);
    line(50, 150, 100, 200);
    line(200, 150, 250, 200);

    getchar();
    return 0;
}