#include <iostream>
#include <cstdlib>
using namespace std;
//task1
int main()
{
 int col1=4;
 int col2=4;
 
    int array[col1][col2];
 for(int i=0; i<col1; i++){ 
     for(int j=0;j<col2;j++){
        array[i][j] = (rand()%10); 
        cout<<array[i][j]<<", ";
     }
 } 
    cout<<endl;
    cout<<"multiple of 3: ";
     for(int i=0; i<col1; i++){ 
     for(int j=0;j<col2;j++){
         array[i][j]=array[i][j]*3;
         cout<<array[i][j]<<", ";
     }
    }

}
