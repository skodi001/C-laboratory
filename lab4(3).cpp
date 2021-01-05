#include <iostream>
#include <cstdlib>
//task1
using namespace std;

int main()
{
    int size=10;
    int array[size];
 for(int i=0; i<size; i++){ 
        array[i] = (rand()%100)+1; 
        cout << array[i]<<", ";
 } 
 
   int min=array[0];
 
  for (int i = 0; i <size; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    cout<<"Minimum value :"<<min;
}
