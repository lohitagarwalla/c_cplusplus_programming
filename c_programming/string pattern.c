#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char name[50];
    gets(name);
    puts(name);
    // pattern printing
    for(i=1;i<=15;i++)
    {
        printf("\n%-20.*s",i,name);
    }
    for(i=14;i>0;i--)
    {
        printf("\n%-20.*s",i,name);
    }
    getch();
    return 0;
}
