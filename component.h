#ifndef COMPONENT_H
#define COMPONENT_H
#endif

class Component
{
    private :
    const string Name;
    public :
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Final() = 0;
    virtual void OnDraw() = 0;
    virtual void OnCreate() = 0;
};