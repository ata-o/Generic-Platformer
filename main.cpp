#include <iostream>
#include "SimpleDraw.h"
#include "Player.h"
#include "World.h"

void main()
{
	Player p(720/2, 720/2, 35, 35);
	World world;
	setWindowSize(1300, 760);
	while (getKey() != 27)
	{
		usePen(0, 1, RGB(0,0,0));
		useBrush(1, RGB(0,0,0));
		drawRectangle(0, 0, 1280, 720);

		p.move(world);
		
		
		world.draw();
		p.draw();
		Sleep(35);
		
		
	}
}