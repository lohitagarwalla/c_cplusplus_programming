#include<stdio.h>
#include<conio.h>
int main()
{
         int count=0,n,i;
         unsigned long int fact=1;
         scanf("%d",&n);
         
         for(i=1;i<=n;i++)
         	{
                          fact=fact*i;
                          if(i%5==0)
                          count++;
            }

      /*   while(fact%10==0)
         {		
                 count++;
                 fact=fact/10;
          }*/
          
          

printf("%d      %lu",count, fact);

getch();
return 0;
}
