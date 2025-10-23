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
    Node* current = head;
    Node* SortedHead = nullptr;
    Node* nextNode;

    //if list is empty then terminate, because there are no nodes in the list
    if (current == nullptr){
        return;
    }

    //while there is a node in the list, or as long as current is not null
    while (current != nullptr){
        //set the temp node to the next node in original list(current->next)
        nextNode = current->next;
        current->next = nullptr; //this is optional but paints clear picture that this is disconnected from og list

        //check if we get to end of list or the next value in the new list is greater than OG node
        if (SortedHead == nullptr || current->data <= SortedHead->data){
            //if either is true, then set the OG node pointer to point to the new list node
            current->next = SortedHead;
            //set new sorted list head to the node that was just added
            SortedHead = current;
        } else {
            //if sorted either is false
            //create a new node and set that to the new sorted list head
            Node* search = SortedHead;
            //while the new node pointer is not null AND the value, of the next node, is less than the current node value
            while (search->next != nullptr && search->next->data < current->data){
                //move to next node
                search = search->next;
            }
            //once proper spot has been found
            //set the node pointer to point to whatever the search node is pointing to
            current->next = search->next;
            //then set the search node pointer to the next node in the og list
            search->next = current;
        }
        //move to the next node
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

