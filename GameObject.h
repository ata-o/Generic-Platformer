#pragma once
#include "SimpleDraw.h"
class GameObject
{
protected:
	double x, y;
	int width, height;
public:
	virtual void draw() = 0;
};

