#ifndef TREE_H
#define TREE_H
#endif

#include <functional>
#include <string>
#include <vector>

using std::string;
using std::vector;

template <class T> class Tree
{
    private:
    T _value;
    vector<Tree> _children;
    
    vector<string> Parse(string path);
        
    public:
    Tree();
    Tree (const T& id) {this->value = id;}
    
    void AddChild(const T& value);
    void RemoveChild (const T& value);
    
    const T& GetValue();
    const vector <Tree> GetChildren();
};