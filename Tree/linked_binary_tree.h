#ifndef LINKED_BINARY_TREE_H
#define LINKED_BINARY_TREE_H
#include "position.h"
#include "node.h"

class LinkedBinaryTree
{
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    PositionList positions() const;
    void addRoot();
    void expandExternal(const Position &p);
    Position removeAboveExternal(const Position &p);
    int depth(const Position &p);
    int height(const Position &p);
    void preorderPrint();

protected:
    void preorder(Node *v, PositionList &pl) const;

private:
    Node *_root;
    int n;
};

#endif