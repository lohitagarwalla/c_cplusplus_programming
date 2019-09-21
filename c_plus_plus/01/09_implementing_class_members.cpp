#include <iostream>
using namespace std;

//implementing method members
class Account{
private:
    string name;
    double balance;

public:
    void set_balance(double bal)
    { 
        balance = bal; 
    }
    void set_name(string nam)
    {
        name = nam;
    }
    void display_bal()
    {
        cout << "available balance: " << balance << endl;
    }
    
    bool deposit(double bal);
    
    bool withdraw(double bal);
};

bool Account::deposit(double bal)
{
    balance += bal;
    return true;
}
    
bool Account::withdraw(double bal)
{
    if(balance >= bal)
    {
        balance -= bal;
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
	Account saroj_acc;
	saroj_acc.set_name("Saroj Agarwal");
	saroj_acc.set_balance(125000);
	
	saroj_acc.display_bal();
	
	if(saroj_acc.deposit(30000))
	{
	    cout << "amount deposited" << endl;
	}
	else{
	    cout << "not deposited" << endl;
	}
	
	saroj_acc.display_bal();
	
	if(saroj_acc.withdraw(5000))
	{
	    cout << "amount withdrawn" << endl;
	}
	else
	{
	    cout << "insufficient balance" << endl;
	}
	
	saroj_acc.display_bal();
	
	if(saroj_acc.withdraw(500000))
	{
	    cout << "amount withdrawn" << endl;
	}
	else
	{
	    cout << "insufficient balance" << endl;
	}
	
	saroj_acc.display_bal();
	return 0;
}
