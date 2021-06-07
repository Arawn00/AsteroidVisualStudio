#include "Player.h"

Player::Player()
{

}

Player::Player(int xP, int yP, int sizeP) : x(xP), y(yP), size(sizeP)
{
}

Player::~Player()
{
}

void Player::Update()
{
    int screenwidth = GetScreenWidth();
    int screenheight = GetScreenHeight();

    // move // 
    if (IsKeyDown(KEY_RIGHT))
    {

        if (x < screenwidth - size)
        {
            x += 5;
        }


    }

    if (IsKeyDown(KEY_LEFT))
    {
        if (x > 0 + size)
        {
            x -= 5;
        }
    }

    if (IsKeyDown(KEY_UP))
    {
        if (y < screenheight - size)
        {
            y -= 5;
        }
    }

    if (IsKeyDown(KEY_DOWN))
    {
        if (y > 0 + size)
        {
        y += 5;
        }
    }
}




void Player::Draw()
{
    DrawRectangle(x, y, size, size, RED);
}
