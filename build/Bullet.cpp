#include "Bullet.h"

Bullet::Bullet()
{
	x = 0;
	y = 0;
	size = 0;

}

Bullet::Bullet(int xP, int yP, int sizeP)
{
}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
	y -= 5;
}

void Bullet::Draw()
{
	DrawRectangle(x, y, size, size, BLUE);
}
