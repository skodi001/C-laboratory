#include <iostream>
#include <string>
using namespace std;
//task4
int main() {
    int num1;
    int num2;
    int sum, sub, mul;
    float divi;    
    cout<<"Enter two numbers"<<endl;
    cin>>num1;
    cin>>num2;
    //Addition
    sum=num1+num2;
    //Subtraction
    if(num1>num2){
    sub=num1-num2;
    }
    else{
        sub=num2-num1;
    }
    //Division
    divi=(float)num1/(float)num2;
    //Multiplication
    mul=num1*num2;
    cout<<"Addition is "<<sum<<endl;
    cout<<"Subtraction is "<<sub<<endl;
    cout<<"Division is "<<divi<<endl;
    cout<<"Multiplication is "<<mul<<endl;
    
}