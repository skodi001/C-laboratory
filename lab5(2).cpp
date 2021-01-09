#include <iostream>
#include <cstdlib>
#include<math.h>
#include<limits.h>
using namespace std;
//task5
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
     cout<<"Min for each row: ";
    int min=INT_MAX;
    int i=0;
    int result[4];
    
    while (i < 4)  {
        for (int j = 0; j < 4; j++){
            if (array[i][j] < min){
            min = array[i][j];
        }
    }
    result[i] = min;
    min = INT_MAX;
    i++;
}
for (int i=0;i<4;i++){
    cout<<result[i]<<",";
}
    
}
