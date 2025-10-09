#include <iostream>
#include "LinkedList.h"
#include "SingleNode.h"

using namespace std;

LinkedList::LinkedList() : head(nullptr), size(0) {}

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
    if (head == nullptr){
        return true;
    }
}

