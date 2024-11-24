//#include "LinearQueue.h"
//#include<iostream>
//using namespace std;
//
//LinearQueue::LinearQueue() {
//	front = rear = nullptr;
//}
//
//bool LinearQueue::isEmpty() {
//	if (front == nullptr)
//		return true;
//	else
//		return false;
//}
//
//void LinearQueue::Enqueue(int val) {
//	Node* newnode = new Node;
//	newnode->data = val;
//	if (isEmpty()) {
//		front = rear = newnode;
//	}
//	else {
//		rear->next = newnode;
//		rear = newnode;
//	}
//}
//
//int LinearQueue::Dequeue() {
//	
//	Node* temp = front;
//	if (isEmpty()) {
//		cout << "\tQueue underflow." << endl;
//	}
//	int val = front->data;
//	front = front->next;
//	delete temp;
//	return val;
//}
//
//int LinearQueue::getFront() {
//	if (isEmpty()) {
//		cout << "\tQueue is Empty." << endl;
//	}
//	return front->data;
//}
//
//void LinearQueue::display() {
//	if (isEmpty()) {
//		cout << "\tQueue is Empty." << endl;
//	}
//	else {
//		Node* temp = front;
//		cout << "\t";
//		while (temp != nullptr) {
//			
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//}
//
//// Destructor to free memory
//LinearQueue::~LinearQueue() {
//	while (!isEmpty()) {
//		Dequeue(); 
//	}
//}