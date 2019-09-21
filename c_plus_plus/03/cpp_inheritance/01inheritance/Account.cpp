#include "Account.h"

//constructor
Account::Account(double bal, string name_val)
{
    balance = bal;
    name = name_val;
}

//deposit method
void Account::deposit(double amount)
{
    cout << "from account deposit " << amount << endl;
}

//withdrawl method
void Account::withdrawal(double amount)
{
    cout <<  "from account withdrawl " << amount << endl;
}

//destructor
Account::~Account()
{
}