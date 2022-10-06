#include <iostream>
#include "structure.h"
#include "structure.cpp"
using namespace std;


int main()
{

    SLinkedList<int>* mySLinked = new SLinkedList<int>();
    mySLinked->addFront(2);
    mySLinked->addFront(3);
    mySLinked->addFront(4);
    mySLinked->addFront(5);
    mySLinked->displayall();
   
    return 0;
}
