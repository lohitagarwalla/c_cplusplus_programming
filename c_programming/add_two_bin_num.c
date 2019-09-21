#include<stdio.h>
#include<conio.h>
int dec(int);
int bin(int);
int main()
{
    int b1,b2,sum,ans;
    scanf("%d%d",&b1,&b2);
    sum=dec(b1)+dec(b2);
    printf("the sum is %d",bin(sum));
    
    getch();
    return 0;
}
int dec(int x)
{
    int i=0,a=1;
    while(x>0)
    {
        i=i+(x%10)*a;
        x=x/10;
        a=a*2;
    }
    return i;
}
int bin(int x)
{
    int a=0,b=1,c;
    while(x>0)
    {
        a=a+(x%2)*b;
        x=x/2;
        b=b*10;      
    }
    return a;
}
