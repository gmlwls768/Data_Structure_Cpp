#include <iostream>
#include "Slink.h"

using namespace std;
typedef string Elem;
class LinkedStack
{
public:
    LinkedStack();
    int size() const;
    bool empty() const;
    const Elem top() const;
    void push(const Elem &e);
    void pop();

private:
    StringLinkedList S;
    int n;
};
