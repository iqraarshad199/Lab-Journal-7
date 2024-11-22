#pragma once
class CircularQueue
{
private:
	int* arr;
	int front;
	int rear;
	int size;
	int count;
public:

	/*
	@s: The maximum size of the queue.
	*/
	CircularQueue(int s);

	/*
	@Checks if the queue is empty by comparing count with 0.
	*/
	bool isEmpty();

	/*
	@Checks if the queue is full by comparing count with size.
	*/
	bool isFull();

	/*
	** Enqueue operation to add an element to the rear of the queue.
	@val will store the value at the end of the queue.
	** Updates rear using circular increment ((rear + 1) % size).
	*/
	void Enqueue(int value);

	/*
	** Removes an element from the front of the queue.
	** Updates front using circular increment ((front + 1) % size) to point to the next element.
	@Return the value after removing from the front.
	*/
	int Dequeue();

	/*
	@Returns the front element of the queue without removing it.
	*/
	int getFront();

	/*
	@Prints all elements in the queue from front to rear.
	*/
	void display();
};

