#include "CircularQueue.h"
#include<iostream>
using namespace std;

CircularQueue::CircularQueue(int s) {
    arr = new int[s];
    size = s;
    front = 0;
    rear = 0;
    count = 0;
}

bool CircularQueue::isEmpty() {
    if (count == 0)
        return true;
    else
        return false;
}

bool CircularQueue::isFull() {
    if (count == size)
        return true;
    else
        return false;
}

void CircularQueue::Enqueue(int value) {
    if (isFull()) {
        cout << "Queue overflow." << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;  
    }
    arr[rear] = value;
    rear = (rear + 1) % size;          
    count++;
}

int CircularQueue::Dequeue() {
    if (isEmpty()) {
        cout << "Queue underflow." << endl;
        return -1;  
    }
    int value = arr[front];        
    
        front = (front + 1) % size; 
        count--;
    
    return value;
}

int CircularQueue::getFront() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return arr[front];
}

void CircularQueue::display() {
    if (isEmpty()) {
        cout << "Queue is Empty." << endl;
        return; 
    }

    int f = front;
    cout << "Queue elements: ";

    while (f != rear) {
        cout << arr[f] << " ";
        f = (f + 1) % size; 
    }
    cout << endl;
}

