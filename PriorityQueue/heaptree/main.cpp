#include "Student.h"
#include "HeapPriorityQueue.h"
#include <iostream>

using namespace std;

int main()
{
    HeapPriorityQueue p;
    p.insert(Student(1, "one"));
    p.insert(Student(4, "two"));
    p.insert(Student(1, "three"));
    p.insert(Student(2, "four"));
    p.insert(Student(5, "Five"));

    while (!p.empty())
    {
        Student s = p.min();
        s.show();
        p.removeMin();
    }
}