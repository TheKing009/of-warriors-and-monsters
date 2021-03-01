#include "raylib.h"

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Of Warriors And Monsters");
    
    Texture2D background = LoadTexture("assets/images/backgrounds/4.png");
    Vector2 backgroundPosition = {0, 0};
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTextureEx (background, backgroundPosition, 0, 1.25, RAYWHITE);
        
        EndDrawing();
    }
}