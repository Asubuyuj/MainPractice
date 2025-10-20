#pragma once
#include "SingleNode.h"

class LinkedList {
    private:
        Node* head;
        Node* currNode;
        Node* tail;
        int size;

    public:
        LinkedList(); //done
        ~LinkedList(); //done
        void InsertInFront(int); //done 
        void InsertAfterNode(int, int); //done
        void InsertAtEnd(int); //done
        void Remove(int);
        Node* GetNode(int); //done
        int GetSize() const; //done
        bool IsEmpty() const; //done
        bool MakeEmpty(); //done
        void PrintList(); //done
};