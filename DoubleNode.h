#pragma once
#include "Node.h"
class DoubleNode :
    public Node
{
public:
    DoubleNode* nextNode;
    DoubleNode* prevNode;
    DoubleNode(int value);

};

