#include <iostream>
#include "structure.h"
using namespace std;

//SlinkedList accessor

//notice that we should still declare our template
template<typename E>
SLinkedList<E>::SLinkedList() {
    head = NULL;
    size = 0;
}

template<typename E>
bool SLinkedList<E>::empty() const {
    return head == NULL;
}

template<typename E>
const E& SLinkedList<E>::front() const {
    return head->elem;
}

template<typename E>
void SLinkedList<E>::addFront(const E& e) {
    SNode<E>* addS = new SNode<E>;
    addS->elem = e;
    addS->next = head;
    head = addS;
    size++;
}

//check whether it works
template<typename E>
void SLinkedList<E>::removeFront() {
    SNode<E>* nhead = new SNode<E>;
    nhead = head->next;
    delete head;
    head = nhead;
    size--;
}

//recall every "new" operator should correspond to a "delete"
template<typename E>
SLinkedList<E>::~SLinkedList() {
    while (head != NULL) {
        removeFront();
    }
    size = 0;

}

template<typename E>
int SLinkedList<E>::getSize() {
    return size;
}


template<typename E>
const E& SLinkedList<E>::getElem(int index) {
    SNode<E>* cursor = head;
    while (index != 0) {
        cursor = cursor->next;
        index--;
    }
    return cursor->elem;
}

template<typename E>
void SLinkedList<E>::displayall() const{
    int index = SLinkedList.getSize();
    SNode<E>* cursor = head;
    cout << "HEAD-->" << endl;
    cout << cursor->elem << endl;
    while (index != 0) {
        cursor = cursor->next;
        cout << cursor->elem << endl;
        index--;
    }
    cout << "NULL" << endl;

}