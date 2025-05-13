#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawlineDDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;   
                                                        
    // Calculate the number of steps required
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x += xIncrement;
        y += yIncrement;
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"C:\\TURBOC3\\BGI");

    int x1, x2, y1, y2;

    x1 = 100;
    y1 = 100;
    x2 = 200;
    y2 = 200;

    // printf("Enter the coordinates of the first point (x1, y1): ");
    // scanf("%d %d", &x1, &y1);
    // printf("Enter the coordinates of the second point (x2, y2): ");
    // scanf("%d %d", &x2, &y2);

    void drawlineDDA(int x1,int y1, int x2,int y2);

    getch();
    closegraph();
    return 0;
}