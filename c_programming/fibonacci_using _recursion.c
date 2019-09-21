#include<stdio.h>      
#include<conio.h>     
int fibonacci(int ,int, int);    
int main()
{
    int n;
    scanf("%d",&n);
    printf("0 1 ");
    fibonacci(0,1,n-2);
    getch();
    return 0;
}                          
int fibonacci(int a,int b,int x)           
{                        
    int c;
    if(x>0)
    {
        c=a+b;
        printf("%d ",c);
        return fibonacci(b,c,x-1);
    }
}                             
