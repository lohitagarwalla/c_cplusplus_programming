#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"
class Saving_acc : public Account
{
public:
    double int_rate;
    void deposit( double amount);
    void withdrawal(double amount);
    Saving_acc(double int_rate_val = 3);
//    void deposit (double amount);
//    void withdrawal (double amount);
    ~Saving_acc();
};

#endif // _SAVING_ACCOUNT_H_