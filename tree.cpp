#include "tree.h"

template <class T>
void Tree<T>::AddChild (const string & id)
{
    this -> _children.push_back(Tree(id));
}

template <class T>
void Tree<T>::RemoveChild (const string& id)
{
    Hash hashedID;
    hashedID(id);
    for (int i = 0; i < this->_children.length(); i++)
    {
        if (this -> _children.at(i)._name == hashedID)
        {
            this -> _children.erase(this -> _children.begin() + i);
            break;
        }
    }
}

template <class T>
const Hash& Tree<T>::GetId()
{
    return _name;
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