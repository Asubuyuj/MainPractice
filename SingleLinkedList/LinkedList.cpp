#include <iostream>
#include "LinkedList.h"
#include "SingleNode.h"

using namespace std;

LinkedList::LinkedList() : head(nullptr) , size(0) {}

LinkedList::~LinkedList() {
    Node* next;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}

bool LinkedList::MakeEmpty() {
    Node* next;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
    if (head != nullptr){
        return false;
    }
    size = 0;
    return true;
}

void LinkedList::InsertInFront(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    size++;
}

void LinkedList::PrintList(){
    if (head == nullptr){
        cout << "List is empty!\n";
    }
    while (head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int LinkedList::GetSize() const{
    return size;
}

