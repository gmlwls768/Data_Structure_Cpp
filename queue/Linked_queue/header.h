#include <iostream>
#include "clink.h"
using namespace std;

typedef string Elem;
class LinkedQueue
{
public:
    LinkedQueue();
    int size() const;
    bool empty() const;
    const Elem &front() const; // throw(QueueEmpty);
    void enqueue(const Elem &e);
    void dequeue(); // throw (QueEmpty);
private:
    CircleList C;
    int n;
};

class QueueEmpty
{
public:
    QueueEmpty();
    QueueEmpty(string e);
    string err;
};