#include "PriorityQueue.h"
#include<iostream>
using namespace std;

PriorityQueue::PriorityQueue(int s) {
    size = s;
    arr = new int[size];  
    count = 0;                 
}

void PriorityQueue::Enqueue(int value) {
    if (count >= size) {
        cout << "\tQueue overflow." << endl;
        return;              
    }

    arr[count] = value;       
    count++;                   
}

int PriorityQueue::Dequeue() {
    if (count == 0) {
        cout << "\t\tQueue underflow." << endl;
        return -1;           
    }

    int min = 0;
    for (int i = 1; i < count; i++) {
        if (arr[i] < arr[min]) {
            min = i;    
        }
    }

    int value = arr[min]; 

    // Shift elements to left after removing min element
    for (int i = min; i < count - 1; i++) {
        arr[i] = arr[i + 1];        
    }

    count--;                         

    return value;                
}

void PriorityQueue::display() {
    if (count == 0) {
        cout << "\t\t\tQueue is empty." << endl;
        return;
    }
    cout << "\t\t\tQueue elements: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";       
    }
    cout << endl;                   
}

PriorityQueue::~PriorityQueue() {
    delete[] arr;
}