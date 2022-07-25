#include "DoubleDirectionList.h"
#include"DoubleNode.h"


void DoubleDirectionList::appendNode(int value)
{
	if (length == 0)
	{
		length++;
		head = new DoubleNode(value);
		last = head;

	}
	else
	{
		
		length++;
		last->nextNode = new DoubleNode(value);
		last->nextNode->prevNode = last;
		last = last->nextNode;
		last->nextNode = head;


	}
}

void DoubleDirectionList::addNodeAfter(DoubleNode* node, int value)
{
	DoubleNode* temp = new DoubleNode(value);
	temp->prevNode = node;
	temp->nextNode = node->nextNode;
	node->nextNode = temp;

}

void DoubleDirectionList::printList(DoubleNode* node)
{
	system("cls");
	std::cout << "value:" << node->value << std::endl;
	int choice;
	std::cout << "1: next\n2: Add node after this node\n3 Delete this node\n4 Back to head\n5 Go to tail\n6Add note before\n7 Prev";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		this->printList(node->nextNode);
		break;
	case 2:
		addNodeAfter(node, 69);
		this->printList(node->nextNode);
		break;
	case 3:
		deleteThisNode(node);
		this->printList(node->nextNode);
		break;
	case 4:
		this->printList(head);
		break;
	case 5:
		this->printList(last);
		break;
	case 6:
		//addNodeBefore(node, 33);
	case 7:
		this->printList(node->prevNode);
		break;


	default:
		std::cout << "xd";
	}
}

void DoubleDirectionList::deleteThisNode(DoubleNode* node)
{
	node->nextNode->prevNode = node->prevNode;
	node->prevNode->nextNode = node->nextNode;
	
}

DoubleNode* DoubleDirectionList::getHead()
{
	return head;

}
