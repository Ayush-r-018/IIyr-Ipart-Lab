#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"C:\\TURBOC3\\BGI");

    int x = getmaxx();
    int y = getmaxy();

    // Layout
    rectangle(0, 0, x, y);

    // Diagonal
    line(x, 0, 0, y);
    line(x, y, 0, 0);

    // Partition maker
    for (int i = 1; i <= 3; i++)
    {
        line((i * x / 4), 0, (i * x / 4), y);
        line(0, (i * y / 4), x, (i * y / 4));
    }

    // middlepoint connector
    line((x / 2), 0, 0, y / 2);
    line(0, (y / 2), (x / 2), y);
    line((x / 2), y, x, y / 2);
    line(x, (y / 2), (x / 2), 0);

    getch();
    closegraph();
    return 0;
}