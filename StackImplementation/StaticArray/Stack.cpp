#include "Stack.h"
#include <iostream>

//constructor
Stack::Stack(){
    top = -1;
}

bool Stack::IsEmpty() const {
    return (top == -1);
}

bool Stack::IsFull() const {
    return (top == MAX_ITEMS - 1);
}

//Adding in element into the stack
void Stack::Push(int value){
    //checking if array is full
    if (IsFull()){
        //throws an exception if full
        throw FullStack();
    }
    //increment top
    top++; //again this holds the index of current item
    arr[top] = value;
}

//Removing the last element from the array first
void Stack::Pop(){
    if (IsEmpty()){
        throw EmptyStack();
    }
    top--;
}

//returning the element on "top" of the stack or the last/latest item entered
int Stack::Top() const {
    if (IsEmpty()){
        throw EmptyStack();
    }
    return arr[top];
}

void Stack::PrintStack(){
    while (!IsEmpty()){
        std::cout << Top() << " ";
        Pop();
    }
    std::cout << "\n";
}
