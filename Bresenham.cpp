#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int dx, dy, p, x, y;

    initgraph(&gd, &gm, "");

    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    x = x1;
    y = y1;

    p = 2 * dy - dx;

    printf("\nPlotted Points:\n");
    printf("(x , y)\n");

    putpixel(x, y, WHITE);
    printf("(%d , %d)\n", x, y);

    while (x < x2)
    {
        x++;

        if (p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            y++;
            p = p + 2 * (dy - dx);
        }

        putpixel(x, y, WHITE);
        printf("(%d , %d)\n", x, y);
    }

    getch();
    closegraph();
    return 0;
}
