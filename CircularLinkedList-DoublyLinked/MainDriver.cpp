#include <iostream>
#include "SingleNode.h"
#include "CircularLinkedList.h" 

using namespace std;



int main(){
    CircularLinkedList cll;

    cll.InsertAtEnd(5);
    cll.InsertAtEnd(8);
    cll.PrintList();

}