#ifndef TREE_H
#define TREE_H
#endif

#include <functional>
#include <string>
#include <vector>

using std::string;
using std::hash;
using std::vector;

template <class T> class Tree
{
    private:
    hash<string> _name;
    vector<T> _children; 
};