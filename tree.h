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
    vector<T> _children;
    
    vector<string> Parse(string path);
        
    public:
    T Find(string path);
    bool Insert(Hash parent, T element);    
    bool Insert(string path, T element);
    bool Remove(Hash id);
};