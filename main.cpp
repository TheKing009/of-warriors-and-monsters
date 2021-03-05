#include "raylib.h"
#include "background.h"

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Of Warriors And Monsters");
    Background background("assets/images/backgrounds/1.png");
    
    background.SetPosition({0, 0});
    background.SetScale(1.25);
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        background.Draw();
        
        EndDrawing();
    }
}