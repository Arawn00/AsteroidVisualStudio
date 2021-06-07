#include "Bullet.h"

Bullet::Bullet()
{
	x = 0;
	y = 0;
	size = 0;

}

Bullet::Bullet(int xP, int yP, int sizeP) : x(xP),y(yP),size(sizeP)
{
}

Bullet::~Bullet()
{
}

Rectangle Bullet::GetRect()
{
	return Rectangle { x, y, (float)size, (float)size };
}

void Bullet::Update()
{
	y -= 5;
}

void Bullet::Draw()
{
	DrawRectangle(x, y, size,size, BLUE);
}
