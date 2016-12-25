#pragma once
#include "GameObject.h"
class Platform : GameObject
{
	COLORREF color = RGB(0,0,0);
public:
	Platform() { x = y = height = width = -1; color = RGB(0,0,0); }
	Platform(double x, double y, int w, int h) {
		this->x = x;
		this->y = y;
		width = w;
		height = h;
		color = RGB(0,0,0);
	}
	double getX() { return x; }
	double getY() { return y; }
	int getW() { return width; }
	int getH() { return height; }
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	void setW(int w) { width = w; }
	void setH(int h) { height = h; }
	void setColor(COLORREF c) { color = c; }
	void draw() {
		usePen(0, 1, color);
		useBrush(1, color);
		drawRectangle(x, y, x + width, y + height);
	}
};

