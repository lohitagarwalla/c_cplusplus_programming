#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a;
    scanf("%d",&num);
    for(a=2;a<num;a++)
    {
        if(num%a == 0)
        {
        printf("not prime");
        break;
        }
        if(a+1 == num)
        printf("the number is prime");
    }
getch();
return 0;
}
