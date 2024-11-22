#include "CircularQueue.h"
#include<iostream>
using namespace std;

int main() {
    cout << "\n\t\t\t======================LAB JOURNAL 7============================" << endl;
    cout << "\t\t\t========================EXERCISE 2============================" << endl;
    CircularQueue q(5);  

    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Check if Queue is Empty\n";
        cout << "4. Check if Queue is Full\n";
        cout << "5. Get Front Element\n";
        cout << "6. Display Queue\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.Enqueue(value);
            //q.display();
            break;

        case 2:
            q.Dequeue();
            q.display();
            break;

        case 3:
             if (q.isEmpty())
             cout << "Queue is empty." << endl;
             else
             cout << "Queue is not empty." << endl;
            break;

        case 4:
            if (q.isFull())
                cout <<"Queue is full.";
            else
            cout<<"Queue is not full." << endl;
            break;

        case 5:
            value = q.getFront();
            if (value != -1) {
                cout << "Front element: " << value << endl;
            }
            break;

        case 6:
            q.display();
            break;

        case 7:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }

    } while (choice != 7);
    cout << "\n\t\t\t==================================================================" << endl;
    return 0;
}