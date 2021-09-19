#pragma once
#include <iostream>

class cList
{
	int data;
	cList* next;
public:
	/*inline void setNext(cList* param) { next = param; }
	inline cList* getNext(){ return next; }*/
	/*inline void setData(int data) { this->data = data; };
	inline int getData() { return data; };*/
	cList(int data);
	~cList();
	void push(cList** param,int new_data);
	void removeHead(cList** head);
	void addTail(cList* head,int new_data);
	void printList(cList* head);
	void delList(cList* head);
	bool findElement(int& element,cList* head);
	cList* returnNode(int& element, cList* head);
	inline int getData() { return data; }
};


