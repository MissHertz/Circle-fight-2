#include <raylib.h>

// Global Variables
float windowWidth = 1800;
float windowHeight = 950;
float windowHalfWidth = windowWidth / 2;
float windowHalfHeight = windowHeight / 2;

// Global Player Variables
float playerXPosition = windowHalfWidth;
float playerYPosition = windowHalfHeight;

void DrawPlayer()
{
	float playerSize = 20.f;
	Color playerColor = { 102, 0, 102, 255 };
	DrawCircle(playerXPosition, playerYPosition, playerSize, playerColor);
}

void PlayerController()
{
	float playerSpeed = 200.f;
	float increasedplayerSpeed = 1.5f;
	float reducedplayerSpeed = 0.6f;

	if (IsKeyDown(KEY_A))
	{
		if (IsKeyDown(KEY_LEFT_SHIFT))
		{
			playerXPosition -= playerSpeed * increasedplayerSpeed * GetFrameTime();
		}

		if (IsKeyDown(KEY_LEFT_CONTROL))
		{
			playerXPosition -= playerSpeed * reducedplayerSpeed * GetFrameTime();
		}

		else
		{
			playerXPosition -= playerSpeed * GetFrameTime();
		}
	}

	if (IsKeyDown(KEY_D))
	{
		if (IsKeyDown(KEY_LEFT_SHIFT))
		{
			playerXPosition += playerSpeed * increasedplayerSpeed * GetFrameTime();
		}
		if (IsKeyDown(KEY_LEFT_CONTROL))
		{
			playerXPosition += playerSpeed * reducedplayerSpeed * GetFrameTime();
		}
		else
		{
			playerXPosition += playerSpeed * GetFrameTime();
		}
	}

	if (IsKeyDown(KEY_W))
	{
		if (IsKeyDown(KEY_LEFT_SHIFT))
		{
			playerYPosition -= playerSpeed * increasedplayerSpeed * GetFrameTime();
		}

		if (IsKeyDown(KEY_LEFT_CONTROL))
		{
			playerYPosition -= playerSpeed * reducedplayerSpeed * GetFrameTime();
		}

		else
		{
			playerYPosition -= playerSpeed * GetFrameTime();
		}
	}

	if (IsKeyDown(KEY_S))
	{
		if (IsKeyDown(KEY_LEFT_SHIFT))
		{
			playerYPosition += playerSpeed * increasedplayerSpeed * GetFrameTime();
		}
		if (IsKeyDown(KEY_LEFT_CONTROL))
		{
			playerYPosition += playerSpeed * reducedplayerSpeed * GetFrameTime();
		}
		else
		{
			playerYPosition += playerSpeed * GetFrameTime();
		}
	}
}
bool IsPlayerInBounds()
{
	bool withinXBounds = playerXPosition >= 0 || playerXPosition <= windowWidth ? true : false;

	bool withinYBounds = playerYPosition >= 0 || playerYPosition <= windowHeight ? true : false;

	return withinXBounds && withinYBounds;
}