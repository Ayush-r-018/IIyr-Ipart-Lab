#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"C:\\TURBOC3\\BGI");

    rectangle(150, 150, 200, 300);

    settextstyle(BOLD_FONT, HORIZ_DIR, 4);
    setcolor(GREEN);

    outtextxy(200, 200, "K xa Thapa Jii...!");
    

    getch();
    closegraph();
    return 0;
}