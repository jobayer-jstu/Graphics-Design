#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    setcolor(YELLOW);

    arc(300, 200, 0, 180, 100);

    getchar();
    closegraph();
    return 0;
}