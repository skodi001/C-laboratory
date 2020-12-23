#include <iostream>
#include <string>
using namespace std;
//task2
int main() {
   string Name;
   string sentence1;
   string sentence2;
   cout<<"Hello. What is your Name?"<<endl;
   cin>>Name;
   cout<<"Hello "<<Name<<"."<<"How are you?"<<endl;
   cin>>sentence1;//I'm fine
   cout<<"Would you like to Update you PC "<<Name<<endl;
   cin>>sentence2;
   cout<<"OK! Update Started";
}