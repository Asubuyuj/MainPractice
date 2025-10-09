#pragma once
#include "SingleNode.h"

class LinkedList {
    private:
        Node* head;
        int size;

    public:
        LinkedList();
        LinkedList(int);
        ~LinkedList();

        void Append(int value);
        void Prepend(int value);
        void Insert(int index, int value);
        void Remove(int index);
        int Get(int index);
        int GetSize() const;
        bool IsEmpty() const;
        bool MakeEmpty();
};