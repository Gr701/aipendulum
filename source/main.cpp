#include <iostream>
#include <cmath>
#include "imageDisplay.h"


int main () {
    createWindow(-1920, 0, 1920, 1080);
    GrColor color;

    GrPoint center1(300, 500);

    GrPoint center2(700, 500);
    int radius = 100; 

    while (processMessages()) {
        for (int angle = 0; angle < 360; angle += 10) {
            GrPoint p(center1.x + radius * cos(angle * 3.14 / 180), center1.y + radius * sin(angle * 3.14 / 180));
            drawLine(center1, p, color);
        }
        for (int angle = 0; angle < 360; angle += 10) {
            GrPoint p(center2.x + radius * cos(angle * 3.14 / 180), center2.y + radius * sin(angle * 3.14 / 180));
            drawLine(center2, p, color);
        }
        renderImage();
        Sleep(1000/60);
    }
    return 0;
}