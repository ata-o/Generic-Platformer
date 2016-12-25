#pragma once
#include "Platform.h"
class World
{
	
public:
	Platform p[7];
	World();
	void draw() {
		for (int i = 0; i < 7; i++)
		{
			p[i].draw();
		}
	}
};

