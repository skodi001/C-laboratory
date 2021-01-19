//LAB9
//Q7

#include <iostream>
using std::cout;

int main(){
    const int SIZE = 8;
    int arr[ ] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr;   // Pointer   

    numPtr = arr;

    cout << "The numbers in Array are:\n";
    for (int index = 0; index < SIZE; index++) {
        cout << *numPtr << " ";
        numPtr++;
    }
    
    cout << "\nThe numbers in Array backwards are:\n";
    for (int index = 0; index < SIZE; index++) {
        numPtr--;
        cout << *numPtr << " ";
    }
    return 0;
    
}