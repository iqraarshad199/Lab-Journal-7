#pragma once
class PriorityQueue
{
private:
    int* arr;       
    int size;  
    int count;       

public:
    /*
    * Constructor
    @s: The maximum capacity of the priority queue.
    */
    PriorityQueue(int s); 
    ~PriorityQueue();        // Destructor

    /*
    @value: The integer value to be added to the priority queue.
    */
    void Enqueue(int value);     

    /*
    **Removes and returns the minimum element from the priority queue.
    **Finds and removes the minimum element from the array.
    */
    int Dequeue();                    

    /*
    @Display all the elements in the queue.
    */
    void display();                 
};

