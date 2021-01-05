#include <iostream>
#include <cstdlib>
using namespace std;
//task5
int main()
{
 int size=10;
    int counter;
    int array[size];
 for(int i=0; i<size; i++){ 
        array[i] = (rand()%10); 
        cout << array[i]<<", ";
        if(array[i]==5){
          counter++ ; 
        }
 } 
 cout<<"Number of 5 :"<<counter;
}
