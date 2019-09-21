#include<stdio.h>
#include<conio.h>
int main()
{
     int a;
     int b,c;
     c=0;
     scanf("%d",&a);
     while(a>=0)
     {
       b=a%10;
       a=a/10;
       c=c+b;
     }
     printf("sum of the digits is %d",c);

getch();
return 0;
}
