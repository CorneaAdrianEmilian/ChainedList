// ChainedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Lista.h"
#include <iostream>

int main()
{
	cList* head = nullptr;
	head->push(&head, 25);
	head->push(&head, 30);
	head->push(&head, 35);
	head->push(&head, 40);
	head->printList(head);
	head->removeHead(&head);
	head->addTail(head, 99);
	head->printList(head);

	head->delList(head);

}

