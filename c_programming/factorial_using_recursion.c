#include<stdio.h>
#include<conio.h>
int factorial(int a);
int main()
{
    int a;
    printf("enter a number ot find its factorial\n");
    scanf("%d",&a);
    printf("%d",factorial(a));
    
    getch();
    return 0;
}
int factorial(int a)
{   
   if(a==1)
   return 1;
   else
    return a*factorial(a-1);
    
    
}
