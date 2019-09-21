#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    char time[10];
    gets(time);
    //printf("%d",time[1]-48);
    a=(time[0]-48)*10+(time[1]-48);
    //printf("%d",a);
    if(time[8]=='p' || time[8]=='P')
    {
        b=a+12;
        printf("%d:",b);
    }
    if(time[8]=='a' || time[8]=='A')
    {
        printf("%d:",a);
    }
    for(c=3;c<=7;c++)
    {
        printf("%c",time[c]);
    }
    
    getch();
    return 0;
}

