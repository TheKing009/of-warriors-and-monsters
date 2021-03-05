#include "tree.h"

template <class T>
vector <string> Tree<T>::Parse(string path)
{
    int length = path.length;
    vector <string> returnPath;
    int depth = 0;
    string str = "";
    for (int i = 0;i < length; i++)
    {
        if (path[i] != '/' || path[i] != "#")
        {
            str.push_back(path[i]);
        }
        else
        {
            returnPath[depth].push_back(str);
            ++depth;
            str = "";
        }
    }
    
    return returnPath;
}

template <class T>
T Tree<T>::Find(string path)
{
    vector <string> parsedPath = Parse(path);
    
}

template <class T>
bool Tree<T>::Insert(Hash parent, T element)
{

}

template <class T>
bool Tree <T>::Insert(string parentPath, T element)
{
    
}

template <class T>
bool Tree<T>::Remove(Hash id)
{
}