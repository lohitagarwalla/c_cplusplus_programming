#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b,c,i,j;
    scanf("%d",&n);
    a=n;
    while(a%2==0)
    {    
         if(a%2==0)
         {   
             printf("2");
             a=a/2;
             if(a>1)
             printf("*");
         }
    }
    for(i=2;i<=a ;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
            if(j==i-1)
            {
              if(a%i==0)
               {   
                  while(a%i==0)
                  {    
                      if(a%i==0)
                      {   
                          printf("%d",i);
                          a=a/i;
                          if(a>1)
                          printf("*");
                      }
                  }
               }       
            }
            
        }
    }
    
    getch();
    return 0;
}
