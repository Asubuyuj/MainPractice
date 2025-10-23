#include <iostream>
#include "Stack.h"

using namespace std;


int main(){
    Stack sk;
    sk.Push(5);
    sk.Push(7);
    sk.Push(8);
    sk.Push(90);
    cout << "Printing stack from last item entered to first item entered\n";
    sk.PrintStack();
}
