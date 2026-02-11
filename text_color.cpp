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
    outtextxy(50, 50, "My name is Jobayer");

    getchar();
    return 0;
}