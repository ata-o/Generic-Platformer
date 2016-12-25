#pragma once
#include "GameObject.h"
#include "World.h"
class Player : GameObject
{
protected:
	double veloX=17.5, veloY=5;
public:
	Player() 
	{
		x = y = height = width = -1;
	}
	Player(double x, double y, int w, int h)
	{
		this->x = x;
		this->y = y;
		width = w;
		height = h;
	}
	void draw() { 
		usePen(0, 1, RGB(255, 0, 0));
		useBrush(1, RGB(255, 0, 0));
		drawRectangle(x, y, x + (double)width, y + (double)height);
	}
	void move(World& w) {
		
			switch (getKey())
			{
			case 'A':
			case 37:
				if (!groundCollision(w))
				{
					x -= veloX;
				}
				else x -= veloX;
				break;
			case 'D':
			case 39:
				if (!groundCollision(w))
				{
					x += veloX;
				}
				else x += veloX;
				break;
			case 'W':
			case 38:
				if (groundCollision(w))
				{
					y -= 70;
				}
				break;
			default:
				break;
			
		}
		gravity(w);
	}
	bool groundCollision(World& w) 
	{
		for (int i = 0; i < 7; i++)
		{
			if (x >= w.p[i].getX()-35 && x <= w.p[i].getX() + w.p[i].getW())
			{
				if (y + height >= w.p[i].getY())
					return true;
				else continue;
			}
			else continue;
		}
		return false;
	}

	void gravity(World& w) 
	{
		if (!groundCollision(w))
		{
			y += 10;
		}
	}
};
