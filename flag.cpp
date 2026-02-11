#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(100, 100, 400, 250);  
    floodfill(101, 101, GREEN);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(220, 175, 40, 40); 

    getch();
    closegraph();
    return 0;
}