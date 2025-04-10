#include <iostream>
#include "decimalStack.h"

using namespace std;

BinaryStack::BinaryStack() {
	top = nullptr;
}
void BinaryStack::push(int val) {
	StackNode* newNode;
	newNode = new StackNode;
	newNode->value = val;
	newNode->next = top;
	top = newNode;
}
int BinaryStack::pop() {
	if (isEmpty()) {
		cout << "The List is Empty.\n";
		return -1;
	}
	int val = top->value;
	StackNode* temp = top;
	top = top->next;
	delete temp;
	return val;
}
bool BinaryStack::isEmpty() {
	if (top == nullptr)
		return true;
	else  return false; 
}
BinaryStack::~BinaryStack() {
	while (!isEmpty()) {
		pop();
	}
}

void BinaryStack::pileBinaryDigits(BinaryStack& stacklist, int num) {
	if (num == 0) return;  // Base case: stop recursion when num reaches 0

	// Recursive step: push remainder and call function with quotient
	pileBinaryDigits(stacklist, num / 2);
	stacklist.push(num % 2);  // Push binary digit onto the stack after recursive call
}

