#include "utils.h"

static Vector2 Utils::Clamp(Vector2 value, Vector2 minimum, Vector2 maximum)
{
    Vector2 result = value;
    result.x = (result.x > maximum.x)? maximum.x : result.x;
    result.x = (result.x < minimum.x)? minimum.x : result.x;
    result.y = (result.y > maximum.y)? maximum.y : result.y;
    result.y = (result.y < minimum.y)? minimum.y : result.y;
    return result;
}