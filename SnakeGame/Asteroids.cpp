#include "Asteroids.h"

Asteroids::Asteroids()
{
	x = 0;
	y = 0;
	size = 0;
}

Asteroids::Asteroids(int xP, int yP, int sizeP):x(xP),y(yP),size(sizeP)
{
	
}

Asteroids::~Asteroids()
{
}

Rectangle Asteroids::GetRect()
{
	return Rectangle { x, y, (float)size, (float)size };
}

void Asteroids::Update()
{
}

void Asteroids::Draw()
{
	DrawRectangle(x, y, size, size, BROWN);
}
