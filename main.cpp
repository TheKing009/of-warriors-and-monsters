#include "raylib.h"
#include "background.h"

#include <functional>
#include <string>
#include <iostream>

using std::cout;
using std::hash;
using std::string;

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Of Warriors And Monsters");
    Background background("assets/images/backgrounds/1.png");
    
    background.SetPosition({0, 0});
    background.SetScale(1.25);
    
    SetTargetFPS(60);
    
    hash<string> h;
    hash <string> name;
    cout << h("Hello") << '\t' << name("hello");
    
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        background.Draw();
        
        EndDrawing();
    }
}