#include <iostream>
#include "Queue.h"

//default Constructor
Queue::Queue(){
    rear = -1;
    front = -1;
}

//add item to the queue
void Queue::Enqueue(int value){
    if (IsFull()){
        throw FullQueue();
    }
    if (IsEmpty()){
        front = rear = 0;
    } else {
        rear++;
    }
    arr[rear] = value;
}

//remove first item from queue
int Queue::Dequeue(){
    if (IsEmpty()){
        throw EmptyQueue();
    }
    int temp = arr[front];
    if (front == rear){
        front = rear = -1;
    } else {
        front++;
    }
    return temp;
}

int Queue::Front(){
    if (IsEmpty()){
        throw EmptyQueue();
    }
    return arr[front];
}





//check if the Queue is empty
bool Queue::IsEmpty() const {
    return (front == -1 && rear == -1);
}

//check if the Queue is full
bool Queue::IsFull() const {
    return (rear == MAX_ITEMS - 1);
}