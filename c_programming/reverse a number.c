#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    while(a>0)
    {
       b=a%10;
       a=a/10;
       printf("%d",b);
    }
    
    
getch();
return 0;
}
