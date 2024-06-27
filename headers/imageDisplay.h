#pragma once

#include <windows.h>
#include <algorithm> 

struct GrColor {
    int r, g, b;
    GrColor();
    GrColor(int r, int g, int b);
    void print();
};

struct GrPoint {
    int x, y;
    GrPoint();
    GrPoint(int x, int y);
    GrPoint & operator+=(const GrPoint & rhs);
};

void createWindow(int x, int y, int width, int height);

void makeWindowTransparent(int r, int g, int b);

void closeWindow();

LRESULT CALLBACK windowProcedure(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

bool processMessages(); //should be called in cycle, returns false if window is closed

void renderImage();

void clearRender(GrColor color);

void drawPixel(int x, int y, const GrColor* color);

void fillRect(int x, int y, int width, int height, GrColor color);

void drawLine(GrPoint point1, GrPoint point2, GrColor color);

void drawLine(GrPoint point1, GrPoint point2, GrColor color, int thickness);

void draw1dBuffer(int x, int y, int width, int height, int* buffer);

void draw3dBuffer(int x, int y, int width, int height, int* buffer);
