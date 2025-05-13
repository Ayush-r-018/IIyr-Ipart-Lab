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

    int x, y, p, r = 200, xc = 300, yc = 250;

    x = 0;
    y = r;

    // cout << "Enter the Radius : " << endl;
    // cin >> r;

    // cout << "Enter the center : " << endl;
    // cin >> xc >> yc;

    p = 1 - r;

    while (y >= x)
    {
        putpixel(x + xc, y + yc, 2);
        putpixel(y + xc, x + yc, 3);
        putpixel(y + xc, -x + yc, 4);
        putpixel(x + xc, -y + yc, 5);
        putpixel(-x + xc, -y + yc, 6);
        putpixel(-y + xc, -x + yc, 7);
        putpixel(-y + xc, x + yc, 8);
        putpixel(-x + xc, y + yc, 9);

        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * x + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2 * x + 1 - 2 * y;
        }
    }

    getch();
    closegraph();
    return 0;
}