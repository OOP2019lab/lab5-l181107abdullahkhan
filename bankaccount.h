#include<iostream>
#include<string>
using namespace std;
//exercise 1
class bankaccount{
private:
	string username;
	float balance;
	int accnumber;
	int noOftran;
	int *tran;
	float balLim;
	int cap;
public:
	
	bankaccount(string name, int number);
	void print();
	bool withdraw(int amount);
	void deposit(int amount);
	~bankaccount();
	void increasetran();
};
