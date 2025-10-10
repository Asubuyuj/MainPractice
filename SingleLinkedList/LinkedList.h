#pragma once
#include "SingleNode.h"

class LinkedList {
    private:
        Node* head;
        int size;

    public:
        LinkedList(); //done
        ~LinkedList(); //done

        void Append(int);
        void InsertInFront(int); //done
        void Insert(int, int);
        void Remove(int);
        int Get(int);
        int GetSize() const;
        bool IsEmpty() const;
        bool MakeEmpty();
        void PrintList();
};