#include <iostream>
#include "SingleNode.h"
#include "LinkedList.h" 

using namespace std;



int main(){
    LinkedList lk;
    int userValue;
    int newValue;
    cout << "Creating first node\n";
    lk.InsertInFront(5);
    lk.InsertAtEnd(8);
    lk.InsertAtEnd(7);
    lk.InsertInFront(9);

    cout << "Checking list contents\n";
    lk.PrintList();

    cout << "Attempting to delete a specific value\n";
    lk.Remove(5);

    cout << "Checking list\n";
    lk.PrintList();

}