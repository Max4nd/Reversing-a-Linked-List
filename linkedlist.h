#pragma once
#include <iostream>

struct node {
	int data;
	node* nextNode;
	node(int addData);
};

struct linkedList {
	node* head;
	linkedList();
	void reverseList();
	void printList();
	void addNode(int x);
};
