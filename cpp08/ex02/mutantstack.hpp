#pragma once
#include <stack>
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
    MutantStack &operator=(const MutantStack &op)
    {
        if (this != &op)
            std::stack<T>::operator=(op);
        return *this;
    }
    virtual ~MutantStack() {}

    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
	iterator rbegin() { return std::stack<T>::c.rbegin();}
	iterator rend() { return std::stack<T>::c.rend();}
};