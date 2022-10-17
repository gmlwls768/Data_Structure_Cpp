#include "header.h"

LinkedStack::LinkedStack()
    : S(), n(0) {}

int LinkedStack::size() const
{
    return n;
}

bool LinkedStack::empty() const
{
    return n == 0;
}

const Elem LinkedStack::top() const
{
    return S.front();
}

void LinkedStack::push(const Elem &e)
{
    ++n;
    S.addFront(e);
}
void LinkedStack::pop()
{
    --n;
    S.removeFront();
}