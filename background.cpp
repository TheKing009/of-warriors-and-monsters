#include "raylib.h"
#include "background.h"

Background::Background(char *path)
{
    _texture = LoadTexture(path);
}

void Background::Draw()
{
    DrawTextureEx(_texture, _position, 0, _scale, RAYWHITE);
}

void Background::SetScale(float scale)
{
    _scale = scale;
}

void Background::SetPosition(Vector2 position)
{
    _position = position;
}
