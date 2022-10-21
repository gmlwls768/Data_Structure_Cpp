#include <iostream>
using namespace std;

typedef string Elem;
class ArrayQueue
{
public:
    ArrayQueue(int cap);
    int size() const;
    bool empty() const;
    const Elem &front() const; // throw(QueueEmpty);
    void enqueue(const Elem &e);
    void dequeue(); // throw (QueEmpty);

private:
    int n, f, r, capacity;
    string *arrqueue;
};
class QueueEmpty
{
public:
    QueueEmpty();
    QueueEmpty(string e);
    string err;
};