#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#endif

#include <string>
#include <vector>
#include <functional>
#include "component.h"

using std::string;
using std::vector;
using std::hash;

typedef hash<string> Hash;

class Gameobject
{
    private:
    Hash _id;
    vector <Component> _components;
    public:
};