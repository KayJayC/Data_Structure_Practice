#ifndef PRACLINKED_H
#define PRACLINKED_H
//#include <stddef.h>

class PracLinked 
{
private:
	//declare a structure for the list
	struct ListNode
	{
		double value; //Value in this node
		struct ListNode *next; //To point to the next node
	}; ListNode *head; //list head pointer

public:
	//constructor
	PracLinked()
	{
		head = nullptr;
	}

	//destructor
	~PracLinked();


	void appendNode (double);
	void displayList() const;
};

#endif