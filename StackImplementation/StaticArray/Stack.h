//Basic integer stack implementation
//Will start with an array implementation
#pragma once
#define MAX_ITEMS 100

class FullStack
//Exception class used by Push when stak is full
{};

class EmptyStack
//Exception class used by Pop and Top when stak is empty
{};

//Stack class prototypes
class Stack {
    private:
        int top;
        int arr[MAX_ITEMS];
    public:
        Stack(); //constructor
        void Push(int); //add item to Top of list
        void Pop(); //remove item from Top of list
        int Top() const; //return the Top item
        //making const to not modify any of the data memebers
        bool IsEmpty() const; //check if stack is empty
        bool IsFull() const; //check if stack is full
        void PrintStack(); //print the stack
};