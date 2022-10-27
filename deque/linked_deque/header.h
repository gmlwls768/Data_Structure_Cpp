#include <iostream>
#include "dlink.h"
using namespace std;

typedef string Elem;
class LinkedDeque
{
private:
    DLinkedList D;
    int n;

public:
    LinkedDeque();
    int size() const;
    bool empty() const;
    const Elem &front();
    const Elem &back();
    void insertFront(const Elem &e);
    void insertBack(const Elem &e);
    void removeFront();
    void removeBack();
};
