#include <iostream>
using namespace std;
//task5
int main() {
    int num;
    cout << "Enter a Number: ";
    cin >>num;

    switch (num) {
        case 90 ... 100:
            cout <<"5.0"<<endl;
            break;
        case 81 ... 89:
            cout <<"4.5"<<endl;
            break;
        case 75 ... 80:
            cout <<"4.0 "<<endl;
            break;
        case 68 ... 74:
            cout << "3.5"<<endl;
            break;
        case 61 ... 67:
            cout << "3.0"<<endl;
            break;
        default:
            // operator is doesn't match any case 
            cout << "Error! The operator is not correct";
            break;
    }

}