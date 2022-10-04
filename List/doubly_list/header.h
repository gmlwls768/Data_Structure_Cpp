#include <iostream>
using namespace std;

typedef string Elem;
class DNode
{
private:
    Elem elem;
    DNode *prev;
    DNode *next;
    friend class DLinkedList;
};
class DLinkedList
{
public:
    DLinkedList();                // empty list constructor
    ~DLinkedList();               // destructor
    bool empty() const;           // is list empty?
    const Elem &front() const;    // get front element
    const Elem &back() const;     // get back element
    void addFront(const Elem &e); // add to front of list
    void addBack(const Elem &e);  // add to back of list
    void removeFront();           // remove front item list
    void removeBack();            // remove front item list
private:
    DNode *header; // pointer to the head of list
    DNode *trailer;

protected:
    void add(DNode *v, const Elem &e);
    void remove(DNode *v);
};
