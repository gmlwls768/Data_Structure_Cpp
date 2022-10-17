#ifndef HEADER
#define HEADER

#include <iostream>

using namespace std;
enum
{
    DEF_CAPACITY = 100
};

template <typename E>
class ArrayStack
{

public:
    ArrayStack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const E &top() const;
    void push(const E &e);
    void pop();

private:
    E *S;
    int capacity;
    int t;
};

#endif