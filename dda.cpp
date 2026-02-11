#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float dx, dy, steps, xInc, yInc, x, y;

    initgraph(&gd, &gm, "");

    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    xInc = dx / steps;
    yInc = dy / steps;

    x = x1;
    y = y1;

    printf("\nPlotted Points:\n");
    printf("(x , y)\n");

    for(int i = 0; i <= steps; i++)
    {
        putpixel((int)x, (int)y, WHITE);

        printf("(%d , %d)\n", (int)x, (int)y);

        x += xInc;
        y += yInc;
    }

    getch();
    closegraph();
    return 0;
}
