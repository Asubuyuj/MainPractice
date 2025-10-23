#include <iostream>

using namespace std;

int factorial(int num);

int main(){
    cout << "Factorial of 2 is: " << factorial(2) << endl;
    //return 0;
}


int factorial(int num){
    if (num < 1){
        return 1;
    }
    return num * factorial(num - 1);
}