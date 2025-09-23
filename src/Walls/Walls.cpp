#include "Walls.h"
#include "raylib.h"
#include <iostream>

void Walls::RenderWall(int inXPosition, int inYPosition)
{
	DrawRectangle(inXPosition, inYPosition, 200, 200, BLUE);

}

