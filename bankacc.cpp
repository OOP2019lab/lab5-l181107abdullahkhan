#include"bankaccount.h"

//exercise 2
bankaccount::bankaccount(string name, int number)
{
	username=name;
	accnumber=number;
	noOftran=0;
	cap=10;
	tran=new int[cap];
	 balLim=200000.0;
	 balance=0;
}


//exercise 3
void bankaccount::print(){
	cout<<"the account name is"<<" "<<username<<endl;
	cout<<"the acc number is"<<" "<<accnumber<<endl;
	cout<<"the no of transation are"<<" "<<noOftran<<endl;
	cout<<"your balance is"<<" "<<balance<<endl;
}


//exercise 6
bool bankaccount::withdraw(int amount){


	if(amount<=balance)
		{
			balance=balance-amount;
		noOftran++;
		tran[noOftran]=-amount;
		return true;

	    }
	else if(amount>balance)
	{
		return false;
	}

}

void bankaccount::deposit(int amount)
{
	if(amount+balance<=balLim)
		{cout<<"deposit successful"<<endl;
	noOftran++;
	tran[noOftran]=amount;
	balance=balance+amount;
	}

else 
	cout<<"limit exceeded"<<endl;
}



//exercise 7
bankaccount::~bankaccount(){

	delete[]tran;
}



//exercise 9
void bankaccount::increasetran()
{
	 int *increasetran;
	 increasetran=new int[noOftran*2];
	 for(int i=0;i<noOftran;i++)
	 {
		 increasetran[i]=tran[i];
	 }
	 delete[]tran;
	 tran = increasetran;
	 cap= cap*2;
}
