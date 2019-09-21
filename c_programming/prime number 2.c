#include<stdio.h>
#include<conio.h>
int main()
{
           int a,b,c,d;
           scanf("%d",&a);
           for(b=2;b<=a;b++)
           {
               for(c=2;c<b;c++)
               { 
                   d=b%c;
                   if(d==0)
                   break;
                   if(c+1==b)
                   printf("%d\n",b);
               }
           }
           getch();
           return 0;
}
