#include "MyIntList.h"

MyIntList::MyIntList()
{
	front = nullptr;
	back = nullptr;
}

void MyIntList::push_back(int num)
{
	Node *node = new Node;
	node->num = num;

	if (front == nullptr && back == nullptr) {
		front = node;
		back = node;
	}
	else {
		back->next = node;
		node->current = back;
		node->next = nullptr;
		back = node;
	}
}

Node *MyIntList::begin()
{
	return front;
}

Node *MyIntList::end()
{
	return back;
}
