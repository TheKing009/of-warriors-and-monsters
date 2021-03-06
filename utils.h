#ifndef UTILS_H
#define UTILS_H
#endif

#define max(a, b) ((a)>(b)? (a) : (b))
#define min(a, b) ((a)<(b)? (a) : (b))

#include "raylib.h"

class Utils
{
    public : 
    static Vector2 Clamp (Vector2 value, Vector2 min, Vector2 max);
};