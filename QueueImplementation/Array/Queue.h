//Array Queue implementation
#pragma once
#define MAX_ITEMS 100

//exception classes
class FullQueue{};
class EmptyQueue{};


class Queue{
    private:
        int rear;
        int front;
        int arr[MAX_ITEMS];

    public:
        Queue(); //default constructor with a set size of 100
        void Enqueue(int); //add item to end of list
        int Dequeue(); //remove item from front of list
        int Front(); //return the item at front of list
        bool IsEmpty() const; //check if list is empty
        bool IsFull() const; //check if list is full


};