#include "Walls.h"
#include "raylib.h"


void Walls::RenderWall(int inXPosition, int inYPosition)
{
	DrawRectangle(inXPosition, inYPosition, WallWidth, WallHeight, WallColor);

}