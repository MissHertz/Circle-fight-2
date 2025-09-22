#include "Walls.h"



void Walls::RenderWall(int inXPosition, int inYPosition)
{
	DrawRectangle(inXPosition, inYPosition, WallWidth, WallHeight, WallColor);

}