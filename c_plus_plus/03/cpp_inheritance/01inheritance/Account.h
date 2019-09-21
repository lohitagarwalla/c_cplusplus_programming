#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

using namespace std;

class Account
{
public:
    double balance;
    string name;
    Account(double bal = 0, string name_val = "None"); //constructor
    ~Account(); //destructor
    void deposit(double amount); //deposit method
    void withdrawal(double amount); //withdrawl method
};

#endif // _ACCOUNT_H_
