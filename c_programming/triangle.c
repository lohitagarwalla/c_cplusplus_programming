#include<stdio.h>
#include<conio.h>
int main()
{
    // number of lines = a;
    int a, c = 1 , b = 1 , count = 0 , count2;
    scanf("%d",&a);
    while(count<=a)
    {
         count2=1;
         while(count2<b)
         {
              printf("%d  ",c);
              c++;
              count2++;          
         }
         printf("\n");
         b++;
         count++;
    }
    getch();
    return 0;
    
}
