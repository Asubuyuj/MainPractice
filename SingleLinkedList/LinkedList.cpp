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

//Inserting node after a given value, if present
void LinkedList::InsertAfterNode(int newValue, int afterValue){
    Node* afterNode = GetNode(afterValue);
    Node* newNode = new Node();
    newNode->data = newValue;
    if (afterNode != nullptr){
        newNode->next = afterNode->next;
        afterNode->next = newNode;
        size++;
    } else {
        //deleting in the event that item is not found
        delete newNode;
    }
}


//Function to return a value from the list, if present
Node* LinkedList::GetNode(int searchValue){
    Node* location = head;
    while (location != nullptr){
        if (location->data == searchValue){
            return location;
        }
        location = location->next;
    }
    return nullptr;
}

//Deleting a specifc value
void LinkedList::Remove(int value){
    Node* current = head;
    Node* prevNode = nullptr;
    

    while (current != nullptr && current->data != value){
        prevNode = current;
        current = current->next;
    }
    if (current == nullptr){
        return;
    }
    if (prevNode == nullptr){
        head = current->next;
    } else {
        prevNode->next = current->next;
    }
    delete current;
    size--;
}

//Function to sort Linked List on insertion
void LinkedList::InsertionSort(){
    Node* SortedHead = nullptr;
    Node* current = head;
    Node* nextNode;
    if (current == nullptr){
        return;
    }
    while (current != nullptr){
        nextNode = current->next;
        current->next = nullptr;
        if (SortedHead == nullptr || current->data <= SortedHead->data){
            current->next = SortedHead;
            SortedHead = current;
        } else {
            Node* search = SortedHead;
            while (search->next != nullptr && search->next->data < current->data){
                search = search->next;
            }
            current->next = search->next;
            search->next = current;
        }
        current = nextNode;
    }
    head = SortedHead;
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

