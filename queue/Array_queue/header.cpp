#include "header.h"
QueueEmpty::QueueEmpty(string e)
{
    this->err = e;
}

ArrayQueue::ArrayQueue(int cap)
    : arrqueue(new string[cap]), n(0), f(0), r(0), capacity(cap) {}
int ArrayQueue::size() const
{
    return n;
}
bool ArrayQueue::empty() const
{
    return n == 0;
}
const Elem &ArrayQueue::front() const
{
    if (empty())
        throw QueueEmpty("front of empty queue");
    return arrqueue[f];
}
void ArrayQueue::enqueue(const Elem &e)
{
    if (size() == capacity)
        throw QueueEmpty("enqueue of empty queue");
    arrqueue[r] = e;
    r = (r + 1) % capacity;
    n++;
}
void ArrayQueue::dequeue()
{
    if (empty())
        throw QueueEmpty("dequeue of empty queue");
    f = (f + 1) % capacity;
    n--;
}
