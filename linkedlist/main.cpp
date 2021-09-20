#include <iostream>
#include "pracLinked.h"
#include "pracLinked.cpp"


int main()
{
	PracLinked list;
	std::cout<< "Hello \n";

	//Append some values to the list
	list.appendNode(2.5);
	list.appendNode(4.7);
	list.appendNode(9.8);
	list.appendNode(12.9);

	list.displayList();
}