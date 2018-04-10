#pragma once

struct Node {
	int num;
	Node* current;
	Node* next;
};

class MyIntList
{
public:
	MyIntList();
	void push_back(int num);
	Node *begin();
	Node *end();
private:
	Node* front;
	Node* back;

};

