#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(BLUE);
    rectangle(150, 100, 350, 300);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(151, 101, BLUE);

    setcolor(RED);
    rectangle(230, 230, 270, 300);
    setfillstyle(SOLID_FILL, RED);
    floodfill(231, 231, RED);

    rectangle(170, 120, 200, 150);
    floodfill(171, 121, RED);

    rectangle(300, 120, 330, 150);
    floodfill(301, 121, RED);

    rectangle(170, 180, 200, 210);
    floodfill(171, 181, RED);

    rectangle(300, 180, 330, 210);
    floodfill(301, 181, RED);

    setcolor(BLUE);
    line(150, 100, 350, 100);

    getch();
    closegraph();
    return 0;
}