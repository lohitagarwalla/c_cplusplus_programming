#include<stdio.h>
#include<conio.h>
int main()
{
    int pin,amount,balance,check;
    pin=1234;
    balance=50000;
    printf("please type your pin\t");
    scanf("%d",&pin);
    if(pin==1234)
                 {
                 printf("type the amount\t");
                 }
    else{
         printf("please type the correct pin");
         }
    if(pin==1234){
         scanf("%d",&amount);
         }
    check=amount%500;
    if(amount<50000 && check==0)
    {
    printf("collect your amount %d",amount);
    }
    else{
         printf("type amount in miltiples of 500");
         }
    getch();
    return 0;
}
