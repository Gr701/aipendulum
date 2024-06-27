#include <iostream>
#include <cmath>
#include "imageDisplay.h"


int main () {
    createWindow(-1920, 0, 1920, 1080);
    GrColor color(255, 0, 255);
    int radius = 100; 

    while (processMessages()) {
        for (int i = 1; i <= 5; i++) {
            GrPoint center((i) * 250, 500);
            for (int angle = 0; angle < 360; angle += 10) {
                GrPoint p(center.x + radius * cos(angle * 3.14 / 180), center.y + radius * sin(angle * 3.14 / 180));
                drawLine(center, p, color, i);
                drawPixel(p, GrColor(100, 255, 100));
            }
        }
        
        /*for (int angle = 0; angle < 360; angle += 10) {
            GrPoint p(center2.x + radius * cos(angle * 3.14 / 180), center2.y + radius * sin(angle * 3.14 / 180));
            drawLine(center2, p, color);
        }*/
        renderImage();
        Sleep(1000/60);
    }
    return 0;
}