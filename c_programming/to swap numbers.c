#include<stdio.h>
#include<conio.h>

int main()
{
     int a,b;
     printf("type the two numbers a and b respectively "); 
     scanf("%d%d",&a,&b);
     a=a-b;
    b=b+a;
     a=b-a;
     printf("a= %d\n b= %d",a,b);
    
          
   
    getch();
    return 0;
}   
