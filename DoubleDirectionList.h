#pragma once
#include "SingleDirectionList.h"
#include "DoubleNode.h"
class DoubleDirectionList
{
public:
	DoubleNode* head;
	DoubleNode* last;
	int length = 0;
	
public:
	void appendNode(int value);
	void addNodeAfter(DoubleNode* node, int value);
	//void addNodeBefore(DoubleNode* node, int value);
	void printList(DoubleNode* node);
	void deleteThisNode(DoubleNode* node);
	DoubleNode* getHead();
};

