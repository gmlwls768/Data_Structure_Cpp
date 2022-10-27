#include "header.h"
void LinkedDeque::insertFront(const Elem &e)
{
    D.addFront(e);
    n++;
}
void LinkedDeque::insertBack(const Elem &e)
{
    D.addBack(e);
    n++;
}
void LinkedDeque::removeFront()
{
    D.removeFront();
    n--;
}
void LinkedDeque::removeBack()
{
    D.removeBack();
    n--;
}
int LinkedDeque::size() const
{
    return n;
}
bool LinkedDeque::empty() const
{
    if (n == 0)
    {
        return true;
    }
}
const Elem &LinkedDeque::front()
{
    D.front();
}
const Elem &LinkedDeque::back()
{
    D.back();
}