#include<stdio.h>
#include<conio.h>
int main()
{
    
    int a,b,sum;
    int *p,*q;
    p=&a;
    q=&b;
    printf("enter two numbers to find sum\n");
    scanf("%d%d",&a,&b);
    sum=*p+*q;
    printf("the sum is %d",sum);
    
    getch();
    return 0;
}
