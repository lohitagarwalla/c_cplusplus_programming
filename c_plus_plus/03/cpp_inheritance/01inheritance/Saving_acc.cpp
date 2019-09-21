#include "Saving_acc.h"

Saving_acc::Saving_acc(double int_rate_val)
{
    int_rate = int_rate_val;
}
void Saving_acc::deposit(double amount)
{
    cout <<"deposit in savings account: " << amount << endl;
}
void Saving_acc::withdrawal(double amount)
{
    cout << "wothdrawal from savings account: " << amount << endl;
}
Saving_acc::~Saving_acc()
{
}

