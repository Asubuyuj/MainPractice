#pragma once
#include "SingleNode.h"

class CircularLinkedList {
    private:
        Node* tail;
        int size;

    public:
        CircularLinkedList(); //done
        ~CircularLinkedList(); //done
        void InsertInFront(int); //done 
        void InsertAfterNode(int, int); //done
        void InsertAtEnd(int); //done
        void Remove(int); //donr
        Node* GetNode(int); //done
        int GetSize() const; //done
        bool IsEmpty() const; //done
        bool MakeEmpty(); //done
        void InsertionSort();  //done
        void PrintList(); //done
};