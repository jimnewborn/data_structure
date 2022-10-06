#pragma once
#include <iostream>
using namespace std;
template<typename E>class SLinkedList;
template<typename E>class SNode;
//node in s-list template
//notice that SLinkedList have the access of SNode so SNode don't have constructor
//include suffix <E>
template<typename E>
class SNode {
private:
    E elem;
    SNode<E>* next;
    friend class SLinkedList<E>;
};


template<typename E>
class SLinkedList {
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    const E& front() const;
    void addFront(const E& e);
    void removeFront();
    int getSize();
    const E& getElem(int idx);
    void displayall() const;
private:
    SNode<E>* head;
    int size;
};

