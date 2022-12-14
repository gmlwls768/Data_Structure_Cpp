#include <iostream>
#include <vector>
#include "HeapPriorityQueue.h"
#include "Student.h"

using namespace std;

class VectorCompleteTree
{
public:
    typedef std::vector<Student>::iterator Position;
    VectorCompleteTree() : V(1){};
    int size() const { return V.size() - 1; }
    Position left(const Position &p) { return pos(2 * idx(p)); }
    Position right(const Position &p) { return pos(2 * idx(p) + 1); }
    Position parent(const Position &p) { return pos(idx(p) / 2); }
    bool hasLeft(const Position &p) { return 2 * idx(p) <= size(); }
    bool hasRight(const Position &p) { return 2 * idx(p) + 1 <= size(); }
    bool isRoot(const Position &p) { return idx(p) == 1; }
    Position root() { return pos(1); }
    Position last() { return pos(size()); }
    void addLast(const Student &e) { V.push_back(e); }
    void removeLast() { V.pop_back(); }
    void swap(const Position &p, const Position &q)
    {
        Student e = *q;
        *q = *p;
        *p = e;
    }

private:
    vector<Student> V;

protected:
    Position pos(int i)
    {
        return V.begin() + i;
    }
    int idx(const Position &p) const
    {
        return p - V.begin();
    }
};