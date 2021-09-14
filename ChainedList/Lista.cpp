#include "Lista.h"

cList::cList(int data)
{
	this->data = data;
	next = nullptr;
}

cList::~cList()
{
}

void cList::push(cList** param, int new_data)
{
	cList* new_list = new cList(new_data);
	new_list->next = *param;
	*param = new_list;
}

void cList::removeHead(cList** head)
{
	if (head != nullptr) {

		cList* temp = (*head)->next;
		delete *head;
		*head = temp;
	}
}

void cList::addTail(cList* head,int new_data)
{
	while (head->next != nullptr) {
		head = head->next;
	}
	cList* temp = new cList(new_data);
	head->next = temp;
}

void cList::printList(cList* head)
{
	while (head != nullptr) {
		std::cout << head->data << std::endl;
		head = head->next;
	}
}

void cList::delList(cList* head)
{
	while (head != nullptr) {
		cList* temp = head->next;
		delete head;
		head = temp;
	}
}

