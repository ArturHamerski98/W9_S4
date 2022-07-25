#include "SingleDirectionList.h"

SingleDirectionList::SingleDirectionList()
{
	length = 0;
}

void SingleDirectionList::appendNode(int value)
{
	if (length == 0)
	{
		length++;
		head = new Node(value);
		last = head;

	}
	else
	{
		length++;
		last->nextNode = new Node(value);
		last = last->nextNode;
		last->nextNode = head;
		
	}
}

void SingleDirectionList::addNodeAfter(Node* node, int value)
{
	Node *temp=new Node(value);
	temp->nextNode = node->nextNode;
	node->nextNode = temp;

}

void SingleDirectionList::addNodeBefore(Node* node, int value)
{
	Node* temp = head;
	Node* temp2 = new Node(33);
	while (temp->nextNode != node)
	{
		temp = temp->nextNode;
	}

	temp2->nextNode = temp->nextNode;
	temp->nextNode = temp2;
	this->printList(node->nextNode);
}

void SingleDirectionList::printList(Node* node)
{
	system("cls");
	std::cout <<"value:"<< node->value << std::endl;
	int choice;
	std::cout << "1: next\n2: Add node after this node\n3 Delete this node\n4 Back to head\n5 Go to tail\n6Add note before";
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
		addNodeBefore(node, 33);


		
	default:
		std::cout << "xd";
		}
	

	
}

void SingleDirectionList::deleteThisNode(Node* node)
{
	Node* temp = head;
	while (temp->nextNode != node)
	{
		temp = temp->nextNode;
	}
	if (temp->nextNode == head)
		head = temp->nextNode->nextNode;
	if (temp->nextNode == last)
		last = temp;
	
	temp->nextNode = temp->nextNode->nextNode;
	this->printList(node->nextNode);
}

Node* SingleDirectionList::getHead()
{
	return head;
}
