#pragma once
#include <iostream>;
#include "raylib.h";
class Asteroids
{
public:
    Asteroids();
    Asteroids(int xP, int yP, int sizeP);
    ~Asteroids();
    float x;
    float y;
    int size;
    Rectangle GetRect();

    void Update();
    void Draw();
};

