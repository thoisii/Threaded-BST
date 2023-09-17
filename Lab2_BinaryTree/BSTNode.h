
// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"

#ifndef BSTNODE_H
#define BSTNODE_H

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
    Key k;                  // The node's key
    E it;                   // The node's value
    BSTNode* lc;            // Pointer to left child
    BSTNode* rc;            // Pointer to right child
    bool lthread{ true }; // Boolean variable to tell is node is thread or thread
    bool rthread{ true }; // Boolean variable to tell is node is thread or thread
                          // thread by default

public:
    // Two constructors -- with and without initial values
    BSTNode() { lc = rc = NULL; }
    BSTNode(Key K, E e, BSTNode* l = NULL, BSTNode* r = NULL)
    {
        k = K; it = e; lc = l; rc = r;
    }
    ~BSTNode() {}             // Destructor

    // Functions to set and return the value and key
    E& element() { return it; }
    void setElement(const E& e) { it = e; }
    Key& key() { return k; }
    void setKey(const Key& K) { k = K; }

    // Functions to set and return the children
    inline BSTNode* left() const { return lc; }
    void setLeft(BinNode<E>* b) { lc = (BSTNode*)b; }
    inline BSTNode* right() const { return rc; }
    void setRight(BinNode<E>* b) { rc = (BSTNode*)b; }

    // Return true if it is a leaf, false otherwise
    bool isLeaf() {
        bool leaf{ false };
        if (lthread == true && rthread == true) {
            leaf = true;
        }
        else {
            leaf = false;
        }

        return leaf;
    }

    // sets the boolean based on what is passed in
    void setLeftThread(bool lt) { lthread = lt; }

    // returns the value of the boolean
    bool getLeftThread() { return lthread; }

    // sets the boolean based on what is passed in
    void setRightThread(bool rt) { rthread = rt; }

    // returns the value of the boolean
    bool getRightThread() { return rthread; }
};

#endif
