#ifndef TREE_H
#define TREE_H
#endif

#include <functional>
#include <string>
#include <vector>

using std::string;
using std::hash;
using std::vector;

typedef hash<string> Hash;

template <class T> class Tree
{
    private:
    Hash _name;
    vector<Tree> _children;
    
    vector<string> Parse(string path);
        
    public:
    Tree();
    Tree (const string& id) {this->_name(id);}
    
    void AddChild(const string& id);
    void RemoveChild (const string& id);
    
    const Hash& GetId();
    const vector <Tree> GetChildren();
};