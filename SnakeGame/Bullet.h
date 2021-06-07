#pragma once
#include <iostream>;
#include "raylib.h";

class Bullet
{
public:
    Bullet();
    Bullet(int xP, int yP, int sizeP);
    ~Bullet();
    float x;
    float y;
    int size;
    Rectangle GetRect();

    void Update();
    void Draw();
};

