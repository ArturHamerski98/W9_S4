#include <iostream>
#include"DoubleDirectionList.h"

int main() {
    SingleDirectionList myList;
    myList.appendNode(1);
    myList.appendNode(2);
    myList.appendNode(3);
    myList.appendNode(4);
    myList.appendNode(5);
    //myList.printList(myList.getHead());

    DoubleDirectionList myDoublelist;
    myDoublelist.appendNode(1);
    myDoublelist.appendNode(2);
    myDoublelist.appendNode(3);
    myDoublelist.appendNode(4);
    myDoublelist.appendNode(5);
    myDoublelist.appendNode(6);
    myDoublelist.printList(myDoublelist.getHead());
    return 0;
}