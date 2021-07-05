#include "linkedlist.h"

node::node(int addData) {
	this->data = addData;
	nextNode = NULL;
}

linkedList::linkedList() {
	head = NULL;
}

void linkedList::reverseList() {
	node* current = head;
	node* previous = NULL; 
	node* next = NULL;

	while (current != NULL) {
		next = current->nextNode;
		current->nextNode = previous;
		previous = current;
		current = next;
	}
	head = previous;
}

void linkedList::printList() {
	struct node* temp = head;

	while (temp != NULL) {
		std::cout << temp->data << " ";
		temp = temp->nextNode;
	}
}

void linkedList::addNode(int x) {
		node* temp = new node(x);
		temp->nextNode = head;
		head = temp;
}

int main() {
	linkedList test;

	for (int i = 0; i <= 10; i++) {
		test.addNode(rand() % 20);
	};

	std::cout << "Original: " << "\n";
	test.printList();

	std::cout << "\n";
	test.reverseList();

	std::cout << "Reversed: " << "\n";
	test.printList();

	return 0;
}