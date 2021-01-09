#include <iostream>
#include <cstdlib>
#include<math.h>
#define PI 3.14159265
using namespace std;
//task2
int main()
{
 int col1=4;
 int col2=4;
 float result;
 
    int array[col1][col2];
 for(int i=0; i<col1; i++){ 
     for(int j=0;j<col2;j++){
        array[i][j] = (rand()%10); 
        cout<<array[i][j]<<", ";
     }
 } 
    cout<<endl;
    cout<<"Sin of all Elements in thw array: "<<endl;
     for(int i=0; i<col1; i++){ 
     for(int j=0;j<col2;j++){
         result=sin((array[i][j]*PI)/180);
         cout<<result<<", ";
     }
    }

}
