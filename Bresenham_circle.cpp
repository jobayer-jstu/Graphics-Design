#include <graphics.h>
#include <stdio.h>

void drawCirclePoints(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);

    printf("(%d,%d) (%d,%d) (%d,%d) (%d,%d) (%d,%d) (%d,%d) (%d,%d) (%d,%d)\n",
           xc + x, yc + y,
           xc - x, yc + y,
           xc + x, yc - y,
           xc - x, yc - y,
           xc + y, yc + x,
           xc - y, yc + x,
           xc + y, yc - x,
           xc - y, yc - x);
}

int main()
{
    int gd = DETECT, gm;
    int xc, yc, r;
    int x = 0, y;
    int p;

    initgraph(&gd, &gm, "");

    printf("Enter center (xc yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter radius: ");
    scanf("%d", &r);

    y = r;

    p = 3 - 2 * r;

    printf("\nPlotted Points:\n");
    drawCirclePoints(xc, yc, x, y);

    while (x <= y)
    {
        x++;

        if (p < 0)
        {
            p = p + 4 * x + 6;
        }
        else
        {
            y--;
            p = p + 4 * (x - y) + 10;
        }

        drawCirclePoints(xc, yc, x, y);
    }

    getch();
    closegraph();
    return 0;
}
