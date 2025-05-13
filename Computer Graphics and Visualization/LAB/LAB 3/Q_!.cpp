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
    int x1, x2, y1, y2, dx, dy, lx, ly;
    cout << "Enter the value of two endpoints of the line segment : ";
    cin >> x1 >> x2 >> y1 >> y2;
 
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (x2 > x1)
    {
        lx = 1;
    }
    else
    {
        lx = -1;
    }

    if (y2 > y1)
    {
        ly = 1;
    }
    else
    {
        ly = -1;
    }

    putpixel(x1, y1, RED);

    if (dx >= dy)
    {
        int p = 2 * dy - dx;
        for (int k = 0; k <= dx; k++)
        {
            if (p < 0)
            {
                x1 = x1 + lx;
                y1 = y1;
                p = p + 2 * dy;
            }
            else
            {
                x1 = x1 + lx;
                y1 = y1 + ly;
                p = p + 2 * dy - 2 * dx;
            }
        }
        putpixel(x1, y1, BLUE);
    }

    if (dx < dy)
    {
        int p = 2 * dx - dy;
        for (int k = 0; k <= dy; k++)
        {
            if (p < 0)
            {
                x1 = x1;
                y1 = y1 + ly;
                p = p + 2 * dx;
            }
            else
            {
                x1 = x1 + lx;
                y1 = y1 + ly;
                p = p + 2 * dx - 2 * dy;
            }
        }
        putpixel(x1, y1, GREEN);
    }

    getch();
    closegraph();
    return 0;
}
