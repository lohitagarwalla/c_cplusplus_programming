#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0,b=0,x,y,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a=0;
       for(j=1;j<=i;j++)
       {
           x=i%j;
           if(x==0)
           a++;
           //printf("\n a= %d",a);
       }
       y=a%2;
       if(y==1)
       b++;
       //printf("\n b= %d",b);
    }
    printf("\n%d",b);
    
    getch();
    return 0;
}
