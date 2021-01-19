//LAB10
//Q6

#include <iostream>
using namespace std;

int main()
{
int item=0;
float Milk=5.80;
float Egg = 6.99;
float Cheese = 10.88;
float Pasta = 2.75;
 
float cost=0.00;
int count=0 ;
int tip=0;
float valueoftip=5.00;
float totalcost=0.00;
   cout<<"GROCERY SHOPPING ITEMS"<<endl;
   cout<<"1. Milk : $ 5 / gallon"<<endl;
   cout<<"2. Egg : $ 6.99 / dozen"<<endl;
   cout<<"3. Cheese : $10.98 /oz"<<endl;
   cout<<"4. Pasta : $2.75 /Packet"<<endl;
  
   cout<<"Choose Your Item : "<<endl;
   cin>> item;
  
   switch (item) {
case 1:
cout << "Milk"<<endl;
cost=cost+Milk;
break;
case 2:
cout << "Egg"<<endl;
cost=cost+Egg;
break;
case 3:
cout << "Cheese"<<endl;
cost=cost+Cheese;
   break;
case 4:
cout << "Pasta"<<endl;
cost=cost+Pasta;
   break;
 
}

cout<<"Quantity of Item :"<<endl;
cin>>count;
 
cout<<"Cost is : ";
cost=cost*count;
cout<<cost<<endl;

cout<<"Do you Want to Add $5 Tip Press 1 for yes or 2 for no"<<endl;
cin>>tip;
switch(tip)
{
   case 1:
   	cost=cost+valueoftip;
cout<<cost<<endl;
   	break;
case 2:
   cost=cost;
   cout<<cost<<endl;
   break;
}

if(cost<=25.00)
{
   cout<<"Your Shipping is Free"<<endl;
   totalcost = cost;
   cout<<"Total Cost is : "<<totalcost<<endl;
  
}
else if(25.00<cost<=35.00)
{
cout<<"Your Shipping cost is $ 4.5"<<endl;
   totalcost = cost+4.5;
   cout<<"Total Cost is : "<<totalcost<<endl;
      
}
else
{
cout<<"Your Shipping cost is $ 7.5"<<endl;
totalcost = cost+7.5;
cout<<"Total Cost is : "<<totalcost<<endl;
  
}
   return 0;
}