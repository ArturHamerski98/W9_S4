#include "Node.h"
#include <iostream>
class SingleDirectionList
{
protected:
	Node* head;
	Node* last;
	int length;
public:
	SingleDirectionList();
	void appendNode(int);
	void addNodeAfter(Node* node, int value);
	void addNodeBefore(Node* node, int value);
	void printList(Node* node);
	void deleteThisNode(Node* node);
	Node* getHead();
};


