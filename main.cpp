#include"bankaccount.h"
#include<iostream>
using namespace std;
int main()
{

string name;
int number;
float amount;
 cout<<"enter name"<<endl;
 getline(cin,name);
 cout<<"enter number"<<endl;
 cin>>number;
 bankaccount myaccount(name,number);



 //exersice4
 myaccount.print();


 //exercise 5
 amount=2000;
 myaccount.withdraw(amount);
 if(myaccount.withdraw(amount)==true)
 { cout<<"transaction successful"<<endl;
 }
 else 
	 cout<<"insufficient balance"<<endl;



 //exercise 6
 amount=250000;
 myaccount.deposit(amount);
 myaccount.print();
 amount=20000;
 myaccount.deposit(amount);

 






return 0;
}