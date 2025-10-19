#include <iostream>
#include "LinkedList.h"
#include "SingleNode.h"

using namespace std;

//default constructor
LinkedList::LinkedList() : head(nullptr) , size(0), currNode(nullptr), tail(nullptr) {}

//destructor
LinkedList::~LinkedList() {
    Node* next;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}

//Make LinkedList empty
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

//Inserting a node at the front a list
void LinkedList::InsertInFront(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    if (size == 0){
        tail = newNode;
    }
    size++;
}

//Inserting node at the end of the list
void LinkedList::InsertAtEnd(int value){
    int tempCount = 0;
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr){
        head = newNode;
    } else {
        tail->next = newNode;
    }
    tail = newNode;
    size++;
    
}















//printing current linked list
void LinkedList::PrintList(){
    currNode = head;
    if (currNode == nullptr){
        cout << "List is empty!\n";
    }
    while (currNode != nullptr){
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
    cout << "\n";
}

//returning size of current list
int LinkedList::GetSize() const{
    return size;
}

