//#include "LinearQueue.h"
//#include<iostream>
//using namespace std;
//
//LinearQueue::LinearQueue(int s) {
//    arr = new int[s];  
//    size = s;
//    front = -1;           
//    rear = -1;            
//}
//
//bool LinearQueue::isEmpty() {
//    if (front == rear)
//        return true;
//    else
//        return false;
//}
//
//bool LinearQueue::isFull() {
//    if (rear == size - 1)
//        return true;
//    else
//        return false;
//}
//
//void LinearQueue::Enqueue(int value) {
//    if (isFull()) {
//        cout << "Queue overflow." << endl;
//        return;
//    }
//    if (isEmpty()) {
//        front = 0;  
//    }
//    arr[++rear] = value;              
//}
//
//
//int LinearQueue::Dequeue() {
//    if (isEmpty()) {
//        cout << "Queue underflow." << endl;
//        return -1;  
//    }
//    int value = arr[front];         
//    if (front == rear) {             // If only one element was present
//        front = -1;                  // Reset indices
//        rear = -1;
//    }
//    else {
//        front++;
//    }
//    return value;
//}
//
//int LinearQueue::getFront() {
//    if (isEmpty()) {
//        cout << "Queue is empty." << endl;
//        return -1;  
//    }
//    return arr[front];  
//}
//
//void LinearQueue::display() {
//    if (isEmpty()) {
//        cout << "Queue is empty." << endl;
//    }
//    else {
//        for (int i = front; i <= rear; i++) {
//            cout << arr[i] << " ";
//        }
//    }
//}
//LinearQueue::~LinearQueue() {
//    delete[] arr; 
//}
