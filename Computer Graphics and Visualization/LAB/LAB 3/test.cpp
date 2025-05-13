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
    int x1, x2, y1, y2;

    cin >> x1 >> x2 >> y1 >> y2;
    line(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}