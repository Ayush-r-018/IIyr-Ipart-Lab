#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int i;
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, (char *)"C:\\TURBOC3\\BGI");

    for (i = 0; i <= 640; i++)
    {
        cleardevice();
        setcolor(WHITE);

        // Sky background
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        floodfill(2, 2, WHITE);

        // Hills with corrected layering
        setcolor(GREEN);
        line(0, 200, 150, 100);
        line(150, 100, 300, 200);
        line(300, 200, 450, 120);
        line(450, 120, 640, 175);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(100, 150, GREEN);
        floodfill(350, 140, GREEN);

        // Sun
        setcolor(YELLOW);
        circle(475, 75, 25);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(475, 75, YELLOW);

        // Train with consistent boundaries
        setcolor(CYAN);
        rectangle(30 + i, 340, 180 + i, 350);
        rectangle(40 + i, 350, 170 + i, 425);
        setfillstyle(XHATCH_FILL, CYAN);
        floodfill(50 + i, 360, CYAN);

        setcolor(RED);
        rectangle(200 + i, 320, 260 + i, 330);
        rectangle(210 + i, 330, 250 + i, 400);
        rectangle(250 + i, 340, 345 + i, 425);
        setfillstyle(HATCH_FILL, RED);
        floodfill(260 + i, 350, RED);

        // Fire effect with corrected boundaries
        setcolor(RED);
        rectangle(300 + i, 300, 330 + i, 340);
        rectangle(290 + i, 290, 340 + i, 300);
        setfillstyle(SLASH_FILL, RED);
        floodfill(310 + i, 310, RED);

        // Wheels
        setcolor(DARKGRAY);
        circle(225 + i, 425, 25);
        circle(70 + i, 437, 12);
        circle(140 + i, 437, 12);
        circle(280 + i, 437, 12);
        circle(320 + i, 437, 12);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(225 + i, 425, DARKGRAY);
        floodfill(70 + i, 437, DARKGRAY);

        // Prevent color glitches
        delay(15);
    }

    getch();
    closegraph();
}