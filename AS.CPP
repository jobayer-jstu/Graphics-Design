#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initwindow(800, 600, "National Martyrs' Memorial");

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(0, 0, 800, 300);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    fillellipse(100, 50, 40, 25);
    fillellipse(140, 40, 50, 30);
    fillellipse(180, 60, 40, 25);

    fillellipse(400, 150, 50, 30);
    fillellipse(450, 140, 60, 40);
    fillellipse(500, 160, 45, 30);

    fillellipse(700, 40, 50, 30);
    fillellipse(760, 50, 60, 35);

    setfillstyle(SOLID_FILL, GREEN);
    bar(0, 300, 800, 450);


    setfillstyle(SOLID_FILL, LIGHTGRAY);

    int mainSpire[] = {320, 100, 340, 360, 300, 360};
    fillpoly(3, mainSpire);
    int p1[] = {320, 130, 360, 360, 340, 360};
    int p2[] = {320, 160, 380, 360, 360, 360};
    int p3[] = {320, 190, 400, 360, 380, 360};
    int p4[] = {320, 130, 300, 360, 280, 360};
    int p5[] = {320, 160, 260, 360, 280, 360};
    int p6[] = {320, 190, 240, 360, 260, 360};

    fillpoly(3, p1);
    fillpoly(3, p2);
    fillpoly(3, p3);
    fillpoly(3, p4);
    fillpoly(3, p5);
    fillpoly(3, p6);

    setcolor(DARKGRAY);
    ellipse(320, 385, 0, 360, 150, 10);

    int poleX1 = 450;
    int poleX2 = 455;

    int flagLeft = 455;
    int flagRight = 530;

    int circleCenterX = 492;

    setfillstyle(SOLID_FILL, DARKGRAY);

    bar(0, 450, 800, 480);
    setcolor(YELLOW);
    line(0, 450, 800, 450); 

    int leftPath[] = {0, 480, 300, 480, 150, 600, 0, 600};
    setfillstyle(SOLID_FILL, DARKGRAY);
    fillpoly(4, leftPath);

    int rightPath[] = {500, 480, 800, 480, 800, 600, 650, 600};
    fillpoly(4, rightPath);

    setfillstyle(SOLID_FILL, BLUE);
    int pool[] = {350, 500, 450, 500, 500, 600, 300, 600};
    fillpoly(4, pool);

    setcolor(YELLOW);
    setlinestyle(SOLID_LINE, 0, 3);
    line(400, 225, 400, 600); 

    setfillstyle(SOLID_FILL, GREEN);
    bar(400, 235, 480, 285); 

    setfillstyle(SOLID_FILL, RED);
    setcolor(RED);
    fillellipse(440, 260, 12, 12); 

    getch();
    closegraph();
    return 0;
}