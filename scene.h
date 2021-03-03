#ifndef SCENE_H
#define SCENE_H
#endif

#include<functional>
#include<string>

#include "gameobject.h"

using std::string;
using std::hash;

class Scene
{
    private :
    hash<string> _name;
    
    public:
    // Every scene needs a name to be initialized
    Scene(string name) {_name(name);}
    // if the name isn't initialized, then it is named as default.
    Scene() {_name("default");}
};