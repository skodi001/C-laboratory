#include<iostream>
using namespace std;
//task6
int main()
{
	int i, j,n;
	cout<<"Enter a number :";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(j=n; j>i; j--)
		{
			cout<<"O ";
		}
		cout<<"\n";
	}
	for(int i=1;i<n;i++){
	    for(int j=0;j<=i;j++){
	        cout<<"O ";
	    }
	    cout<<"\n";
	}

}