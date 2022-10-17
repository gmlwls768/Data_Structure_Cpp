#include "header.h"

template <typename E>
ArrayStack<E>::ArrayStack(int cap)
    : S(new E[cap]), capacity(cap), t(-1) {}

// int ArrayStack::size() const
template <typename E>
int ArrayStack<E>::size() const
{
    return (t + 1);
}

// bool ArrayStack::empty() const
template <typename E>
bool ArrayStack<E>::empty() const
{
    return (t < 0);
}

// const string &ArrayStack::top() const
template <typename E>
const E &ArrayStack<E>::top() const
{
    if (empty())
    {
    }
    // throw IndexOutOfBounds("Top of empty stack");

    return S[t];
}

// void ArrayStack::push(const string &e) // throw(StackFull)
template <typename E>
void ArrayStack<E>::push(const E &e) // throw(StackFull)
{
    if (size() == capacity)
    {
    }
    // throw IndexOutOfBounds("push to full stack");
    S[++t] = e;
}

// void ArrayStack::pop() // throw(StackEmpty)
template <typename E>
void ArrayStack<E>::pop() // throw(StackEmpty)
{
    if (empty())
    {
    }
    // throw IndexOutOfBounds("Pop from empty stack");
    --t;
}
