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
    
    RenderTexture2D target = LoadRenderTexture (gameScreenSize.x, gameScreenSize.y);
    SetTextureFilter (target.texture, FILTER_BILINEAR);
    
    background.SetPosition({0, 0});
    background.SetScale(1.25);
    
    SetTargetFPS(60);
    
    while(!WindowShouldClose())
    {
        float scale = min((float)GetScreenWidth()/gameScreenSize.x, (float)GetScreenHeight()/gameScreenSize.y);
        
        Vector2 mouse = GetMousePosition();
        Vector2 virtualMouse = {0};
        
        virtualMouse.x = (mouse.x - (GetScreenWidth() - (gameScreenSize.x*scale))*0.5f)/scale;
        virtualMouse.y = (mouse.y - (GetScreenHeight() - (gameScreenSize.y*scale))*0.5f)/scale;
        virtualMouse = Utils::Clamp(virtualMouse, (Vector2){ 0, 0 }, gameScreenSize); 
        
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        BeginTextureMode(target);
        background.Draw();
        EndTextureMode();
        
        DrawTexturePro (target.texture, (Rectangle) {0.0, 0.0, target.texture.width, -target.texture.height}, (Rectangle){ (GetScreenWidth() - ((float)gameScreenSize.x * scale))*0.5,(GetScreenHeight() - ((float)gameScreenSize.y * scale))*0.5,
        (float)gameScreenSize.x * scale, (float)gameScreenSize.y * scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);;
        
        EndDrawing();
    }
}