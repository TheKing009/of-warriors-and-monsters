#include "raylib.h"
#include "background.h"

#include "utils.h"

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 600;
    
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);
    InitWindow(screenWidth, screenHeight, "Of Warriors And Monsters");
    Background background((char *)"assets/images/backgrounds/1.png");
    SetWindowMinSize(320, 240);
    
    const Vector2 gameScreenSize = {640, 480};
    
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