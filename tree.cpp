#include "tree.h"

template <class T>
void Tree<T>::AddChild (const T& value)
{
    this -> _children.push_back(Tree(value));
}

template <class T>
void Tree<T>::RemoveChild (const T& value)
{
    for (int i = 0; i < this->_children.length(); i++)
    {
        if (this -> _children.at(i)._value == value)
        {
            this -> _children.erase(this -> _children.begin() + i);
            break;
        }
    }
}

template <class T>
const T& Tree<T>::GetValue()
{
    return _value;
}

template <class T>
const vector<Tree<T>> Tree<T>::GetChildren()
{
    return _children;
}


vector <string> Parse(string path)
{
    int length = path.length();
    vector <string> returnPath;
    int depth = 0;
    string str = "";
    for (int i = 0;i < length; i++)
    {
        if (path[i] != '/' || path[i] != '#')
        {
            str.push_back(path[i]);
        }
        else
        {
            returnPath.push_back(str);
            ++depth;
            str = "";
        }
    }
    
    return returnPath;
}