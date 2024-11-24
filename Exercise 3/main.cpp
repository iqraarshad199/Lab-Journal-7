//#include "LinearQueue.h"
//#include<iostream>
//using namespace std;
//
//int main() {
//    cout << "\n\t\t\t======================LAB JOURNAL 7============================" << endl;
//    cout << "\t\t\t========================EXERCISE 3============================" << endl;
//    LinearQueue q;
//
//    int choice, value;
//
//    do {
//        cout << "\n\tMenu:\n";
//        cout << "\t1. Enqueue\n";
//        cout << "\t2. Dequeue\n";
//        cout << "\t3. Check if Queue is Empty\n";
//        cout << "\t4. Get Front Element\n";
//        cout << "\t5. Display Queue\n";
//        cout << "\t6. Exit\n";
//
//        cout << "\tEnter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "\tEnter value to enqueue: ";
//            cin >> value;
//            q.Enqueue(value);
//            q.display();
//            break;
//
//        case 2:
//            q.Dequeue();
//            q.display();
//            break;
//
//        case 3:
//            if (q.isEmpty())
//                cout << "\tQueue is empty." << endl;
//            else
//                cout << "\tQueue is not empty." << endl;
//            break;
//
//        case 4:
//            value = q.getFront();
//            if (value != -1) {
//                cout << "Front element: " << value << endl;
//            }
//            break;
//
//        case 5:
//            q.display();
//            break;
//
//        case 6:
//            cout << "Exiting program." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice! Please try again." << endl;
//            break;
//        }
//
//    } while (choice != 6);
//    cout << "\n\t\t\t==================================================================" << endl;
//
//}