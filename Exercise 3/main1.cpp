#include "PriorityQueue.h"
#include<iostream>
using namespace std;

int main() {

    cout << "\n\t\t\t======================LAB JOURNAL 7============================" << endl;
    cout << "\t\t\t========================EXERCISE 3============================" << endl << endl;
    PriorityQueue p(5);   

    p.Enqueue(6);
    p.Enqueue(4);
    p.Enqueue(2);
    p.Enqueue(10);

    p.display();                     

    cout << "\t\t\tDequeued: " << p.Dequeue() << endl;  

    p.display();                   
                   

    cout << "\n\t\t\t==================================================================" << endl;
    return 0;
}