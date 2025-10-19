#include <iostream>
#include "SingleNode.h"
#include "LinkedList.h" 

using namespace std;



int main(){
    LinkedList lk;
    cout << "Creating first node\n";
    lk.InsertInFront(5);
    //lk.InsertInFront(6);
    //lk.InsertInFront(9);
    //lk.InsertInFront(11);
    //lk.InsertAtEnd(4);
    lk.InsertAtEnd(8);
    lk.InsertAtEnd(7);
    lk.InsertInFront(9);
    lk.PrintList();

    cout << "Returning size of current list: expected size: \n";
    cout << "Current size " << lk.GetSize() << "\n";

    cout << "Adding more items to the list\n";
    lk.InsertAtEnd(78);
    lk.InsertInFront(56);

    cout << "Checking new list contents\n";
    lk.PrintList();
    
    cout << "\n";
    
    cout << "Attempting to destroy list\n";
    if (lk.MakeEmpty()){
        cout << "List was successfully destroyed!\n";
    } else {
        cout << "List was NOT destroyes successfull!\n";
    }
    
    cout << endl;
    cout << "List contents after destorying\n";
    lk.PrintList();
    cout << "List size: " << lk.GetSize() << "\n";

    cout << "Testing inserting after a given node\n";

}