#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int i;
    int gdriver = DETECT, gmode, errorcode;
    int xmax, ymax;
    initgraph(&gdriver, &gmode, (char *)"C:\\TURBOC3\\BGI");

    for (i = 0; i <= 640; i++)
    {
        cleardevice();
        setcolor(WHITE);

        // Sky background
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(10, 10, WHITE);

        // Hills
        setfillstyle(SOLID_FILL, GREEN);
        line(0, 200, 50, 150);
        line(50, 150, 150, 200);
        line(150, 200, 300, 100);
        line(300, 100, 450, 175);
        line(450, 175, 640, 125);
        line(640, 125, 640, 200);
        line(640, 200, 0, 200);
        floodfill(0, 200, GREEN);
        floodfill(640, 200, GREEN);

        // floodfill(100, 180, WHITE);
        // floodfill(350, 120, WHITE);

        // Sun
        circle(475, 75, 25);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(475, 75, WHITE);

        // Track
        line(0, 450, 640, 450);
        line(0, 475, 640, 475);
        line(0, 480, 640, 480);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(5, 455, WHITE);

        // Train Back
        rectangle(30 + i, 340, 180 + i, 350);
        rectangle(40 + i, 350, 170 + i, 425);
        setfillstyle(SOLID_FILL, CYAN);
        floodfill(100 + i, 355, WHITE);

        // Engine
        rectangle(200 + i, 320, 260 + i, 330);
        rectangle(210 + i, 330, 250 + i, 400);
        rectangle(250 + i, 340, 345 + i, 425);
        setfillstyle(SOLID_FILL, RED);
        floodfill(255 + i, 345, WHITE);

        // Fire
        rectangle(300 + i, 300, 330 + i, 340);
        rectangle(290 + i, 290, 340 + i, 300);
        setfillstyle(SOLID_FILL, RED);
        floodfill(305 + i, 305, WHITE);

        // Wheels
        circle(70 + i, 437, 12);
        circle(140 + i, 437, 12);
        circle(225 + i, 425, 25);
        circle(280 + i, 437, 12);
        circle(320 + i, 437, 12);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(70 + i, 437, WHITE);
        floodfill(140 + i, 437, WHITE);
        floodfill(225 + i, 425, WHITE);
        floodfill(280 + i, 437, WHITE);
        floodfill(320 + i, 437, WHITE);

        delay(30);
    }
    getch();
    closegraph();
}
