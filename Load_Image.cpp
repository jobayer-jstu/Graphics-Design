#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, " ");

    readimagefile("4.jpg", 10, 10, 620, 400);

    getchar();
    return 0;
}