// Midpoint ellipse drawing algorithm

#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"C:\\TURBOC3\\BGI");

    float x, y, p1, p2, rx = 100, ry = 50, xc = 200, yc = 100;

    x = 0;
    y = ry;

    p1 = ry * ry - rx * rx * ry + 0.25 * rx * rx;

    // Region 1
    while (2 * ry * ry * x <= 2 * rx * rx * y)
    {
        putpixel(x + xc, y + yc, 10);
        putpixel(-x + xc, y + yc, 11);
        putpixel(x + xc, -y + yc, 12);
        putpixel(-x + xc, -y + yc, 13);

        if (p1 < 0)
        {
            x++;
            p1 = p1 + 2 * ry * ry * x + ry * ry;
        }
        else
        {
            x++;
            y--;
            p1 = p1 + 2 * ry * ry * x - 2 * rx * rx * y + ry * ry;
        }
    }

    // Region 2
    p2 = ry * ry * (x + 0.5) * (x + 0.5) + rx * rx * (y - 1) * (y - 1) - rx * rx * ry * ry;

    while (y >= 0)
    {
        putpixel(x + xc, y + yc, 10);
        putpixel(-x + xc, y + yc, 11);
        putpixel(x + xc, -y + yc, 12);
        putpixel(-x + xc, -y + yc, 13);

        if (p2 > 0)
        {
            y--;
            p2 = p2 - 2 * rx * rx * y + rx * rx;
        }
        else
        {
            x++;
            y--;
            p2 = p2 + 2 * ry * ry * x - 2 * rx * rx * y + rx * rx;
        }
    }

    getch();
    closegraph();
    return 0;
}