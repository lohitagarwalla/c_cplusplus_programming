#include <stdio.h>
#include  "Account.h"
#include "Saving_acc.h"

int main()
{
    Account lohit;
    lohit.deposit(1000);
    lohit.withdrawal(20);
    
    Account *nidhi;
    nidhi = new Account;
    nidhi->deposit(100000);
    nidhi->withdrawal(500);
    delete nidhi;
    
    Saving_acc saroj;
    saroj.deposit(1000000);
    saroj.withdrawal(2000);
    
	return 0;
}
