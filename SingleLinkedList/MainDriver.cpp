#include <iostream>
#include "SingleNode.h"
#include "LinkedList.h" 

using namespace std;



int main(){
    LinkedList unsorted;
    LinkedList sorted;
    sorted.InsertInFront(5);
    sorted.InsertInFront(7);
    sorted.InsertInFront(18);
    sorted.InsertAtEnd(54);
    sorted.InsertAtEnd(78);
    cout << "Checking list before sorting\n";
    sorted.PrintList();

    cout << "Attempting to sort list\n";
    sorted.InsertionSort();

    //printing sorted list
    sorted.PrintList();

}