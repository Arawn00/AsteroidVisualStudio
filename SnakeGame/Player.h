#pragma once
#include <iostream>
#include "raylib.h"

class Player
{
public:
    Player();
    Player(int xP, int yP, int sizeP);
    ~Player();
    int lives;
    float x;
    float y;
    int size;


    void Movement(); //
    void Update();
    void Draw();
};

