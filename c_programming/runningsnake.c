#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=5,h;
    while(k>0)
    {
    for(i=0;i<5;i++)
    {
        for(h=0;h<1000000;h++);//dellay machineeeeeeeeeeeeeeee
        for(j=0;j<i;j++)
        printf(" ");
        printf("*\n     ");
//        getch();
    }
    for(i=0;i<5;i++)
    {
        for(h=0;h<10000000;h++);                
        for(j=0; j < 5-i ;j++)
        printf(" ");
        printf("*\n     ");
  //      getch();
    }
}
    getch();
    return 0;
}
