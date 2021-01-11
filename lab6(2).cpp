#include<iostream>
using namespace std;
//task1 
int generate(int num) 

{ 
    int result;
 for(int i=1;i<=num;i++){
     result=i*3;
     cout<<result<<", ";
 }
} 
  
// Driver code 
int main() 
{ 
    int num=10;
    generate(num); 
    return 0; 
} 