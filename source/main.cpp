#include <iostream>
#include <cmath>
#include "imageDisplay.h"

int main () {
    createWindow(0, 0, 1920, 1080, 0);
    GrColor color(255, 0, 255);
    int radius = 100; 

    while (processMessages()) {
        
        for (int radius = 10; radius < 56; radius += 10) {
            fillCircle(GrPoint(10 + 150 * (radius - 50), 500), radius, color);
        }
       
        renderImage();
        Sleep(1000/60);
    }
    return 0;
}