#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 0;          
    int y = 200;       

    while (!kbhit()) {  
        cleardevice();  

        settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
        outtextxy(x, y, "My name is Jobayer");

        x += 5; 
        if (x > getmaxx()) {
            x = -200;  
        }

        delay(50); 
    }

    getch();
    closegraph();
    return 0;
}