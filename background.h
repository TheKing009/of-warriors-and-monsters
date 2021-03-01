#ifndef BACKGROUND_H
#define BACKGROUND_H
#endif

#include "raylib.h"

class Background
{
    float _scale;
    Vector2 _position;
    Texture2D _texture;
    
    public:
    Background(char* path);
    void Draw();
    void SetScale(float scale);
    void SetPosition(Vector2 position);
};