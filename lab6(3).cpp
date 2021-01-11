#include<iostream>
using namespace std;
//task5
int generate(int start,int end) 
{ 
 for(int i=start;i<=end;i++){
    cout<<i<<", ";
 }
} 
  
// Driver code 
int main() 
{ 
    int start=1;
    int end=10;
    generate(start,end); 
    return 0; 
} 