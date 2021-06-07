#include <iostream>
#include "raylib.h"
#include "Player.h"
#include "Bullet.h"
#include"Asteroids.h"

using namespace std;
void Update(); // initialisation  update 
void Draw();
void Start();



int const  screenWidth = 800;
int const screenHeight = 450;
Bullet bullet;
Player player;
Asteroids asteroids;

    int main(int argc, char* argv[])
    {
     //Window 
        InitWindow(screenWidth, screenHeight, "C++ Game");

        SetTargetFPS(60); // Set our game to run at 60 frames-per-second

    // Main game loop
        Start();

        while (!WindowShouldClose())    // Detect window close button or ESC key
        {
            Update();
             Draw();

        }
               
        //--------------------------------------------------------------------------------------
        CloseWindow();        // Close window and OpenGL context
        //--------------------------------------------------------------------------------------
        
        return 0;
    }


    void Start()
    {
        asteroids = Asteroids(700, 20, 50);
        player = Player(400, 400, 32);

    }
    bool Collisions(Rectangle rectA, Rectangle rectB)
    {
        int xMinA = rectA.x;
        int xMaxA = rectA.x + rectA.width;
        int yMinA = rectA.y;
        int yMaxA = rectA.y + rectA.height;
        int xMinB = rectB.x;
        int xMaxB = rectB.x + rectB.width;
        int yMinB = rectB.y;
        int yMaxB = rectB.y + rectB.height;
        return !(xMinA > xMaxB || xMaxA  < xMinB || yMinA > yMaxB || yMaxA < yMinB);
    }
    void Update()
    {

        asteroids.Update();
        bullet.Update();
        player.Update();


        if (IsKeyPressed(KEY_SPACE))
        {
            bullet = Bullet(player.x, player.y, 10);

        }
    
        Rectangle bulletRect = bullet.GetRect();
        Rectangle asteroidsRect;
        
        
        
        asteroidsRect = asteroids.GetRect();
        bool colliding = Collisions(bulletRect, asteroidsRect);
        
        if (colliding)
        {
            asteroids = Asteroids();
        }
        
    }
    
   

    void Draw()
    {
        BeginDrawing();
        ClearBackground(BLACK);
        asteroids.Draw();
        player.Draw();
        bullet.Draw();
        EndDrawing();
    }

  
    /*
    void Logic()
    {
        // tail // 
        int prevX = tailX[0];
        int prevY = tailY[0];
        int prev2X, prev2Y;
        for (int i = 1; i< nTail; i++)
        {
            prev2X = tailX[i];
            prev2Y = tailY[i];

            tailX[i] = prevX;
            tailY[i] = prevY;
            prevX = prev2X;
            prev2Y = prev2Y;

        }
        
        // Movement // 
        switch (dir)
        {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
            
        default :
            break;

        }
        if (x == fruitX && y == fruitY) // eat fruit 
        {
            score += 10; // ++ score ; 
            nTail++; // grow snake 
        }
    }
  */
  
