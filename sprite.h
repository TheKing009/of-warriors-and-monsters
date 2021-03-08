#ifndef SPRITE_H
#define SPRITE_H
#endif

#include "component,h"

class Sprite : public Component
{
    public : 
    void Sprite (string path)
    {
        LoadTexture(path);
    }
    
};