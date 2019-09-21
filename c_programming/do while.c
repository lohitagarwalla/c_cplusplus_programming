#include<stdio.h>
#include<conio.h>
int main()
{
    int j,s;
    j=0;
    s=0;
    do
    {
       ++j; 
       s=s+j;
       
    }
    while(j<10);
   
    printf("%d",s);
   
    getch();
    return 0;
}
