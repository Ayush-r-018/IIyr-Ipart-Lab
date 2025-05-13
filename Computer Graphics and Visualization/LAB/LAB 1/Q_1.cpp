#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*) "C:\\TURBOC3\\BGI");

    // Drawing a line
    line(100, 100, 200, 100); // From (100, 100) to (200, 100)

    // Drawing a circle
    circle(350, 200, 50); // Center (300, 200) with radius 50

    // Drawing an ellipse
    ellipse(450, 380, 0, 360, 60, 40); // Full ellipse with center (400, 300)

    // Drawing a rectangle
    rectangle(150, 150, 250, 200); // Top-left (150, 150) and bottom-right (250, 200)

    // Drawing a square (as a rectangle with equal sides)
    rectangle(300, 300, 350, 350); // Top-left (300, 300) and bottom-right (350, 350)

    getch();
    closegraph();
    return 0;
}
