#include <iostream>
#include <string>
using namespace std;
//task5
int main() {
    int n;
    cin>>n;
    
for(int i=n;i>=1;i--){
    for(int j=n;j>i;j--){
        cout<<" ";
    }
    for(int k=1; k<=i;k++){
        cout<<" o";
    }
    cout<<"\n";
}
}