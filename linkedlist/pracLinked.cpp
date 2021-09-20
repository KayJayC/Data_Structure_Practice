#include <iostream>
#include "pracLinked.h"


PracLinked::~PracLinked()//destructor + deletes every node in the list
{
    ListNode *nodePtr; //traverse the list
    ListNode *nextNode; // point to the next node

    nodePtr = head; //position nodePtr at the head of the list

    while( nodePtr != nullptr)
    {
        nextNode = nodePtr -> next; //save pointer to the next node
        delete nodePtr;//delete the current node
        nodePtr = nextNode;
    }

}


void PracLinked::appendNode(double num)
{
	ListNode *newNode; //To point to a new node
	ListNode *nodePtr; //To ove through the list

	//allocate a new node and store num ther.
	newNode = new ListNode;//creates a new node
	newNode -> value = num;//store "num" in "value" member
	newNode -> next = nullptr;//important, this will be the last node, last node must point to nullptr.

	//If there are no nodes in the list (head==nullptr)
	if (!head)// if head != nullptr                            
		head = newNode; // make newNode the first node          
	
	else//there are nodes in the list
	{
		//Intitialize nodePtr to head of list.
		nodePtr = head;

		//Find the last node in the list.
		while (nodePtr -> next)// travles throught the list searching for the last node == nullptr
			nodePtr = nodePtr->next;// sets nodePtr to point to the last node of the list

		//Insert newNode as the last node
		nodePtr -> next = newNode; //
	}
}

void PracLinked::displayList () const
{
	ListNode * nodePtr; //To move through the list

	//position nodePtr at the head of the list
	nodePtr = head;

	//While nodePtr points to a node, travers the list.
	while (nodePtr)
	{
		//Display the value in this node
		std::cout << nodePtr-> value << std::endl;

		//Move to the next node.
		nodePtr = nodePtr -> next;
	}
}
