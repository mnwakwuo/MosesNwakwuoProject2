#include <iostream>
#include "decimalQueue.h"

using namespace std;

BinaryQueue::BinaryQueue() {
	front = rear = nullptr;

}

void BinaryQueue::enqueue(int val) {
	QueueNode* newNode = new QueueNode;
	newNode->value = val;
	newNode->next = nullptr;

	if (isEmpty()) {
		front = rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}
	
}
int BinaryQueue::dequeue() {
	if (isEmpty())
	{
		cout << "Fractional Part is Empty or is '0'." << endl;
		return -1;
	}
	int value = front->value;
	QueueNode* temp = front;
	front = front->next;
	delete temp;
	if (front == nullptr) {
		rear = nullptr;
	}
	return value;
}


bool BinaryQueue::isEmpty() {
	if (front == nullptr)
		if (rear == nullptr) return true;
		else return false;
	else return false;
}
BinaryQueue::~BinaryQueue() {
	while (!isEmpty()) {
		dequeue();
	}
}

void BinaryQueue::afterDecimalQueue(BinaryQueue & fracQueue, double num, int decimal_places) {
	if (decimal_places == 0 || num == 0.0) {
		return; // Base case: stop recursion if decimal limit or fraction reaches zero
	}

	num *= 2;
	int result = num;
	fracQueue.enqueue(result); // Enqueue the integer part as the binary digit
	afterDecimalQueue(fracQueue, num - result, (decimal_places - 1)); // Recursive call
}
