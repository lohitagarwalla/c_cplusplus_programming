#include<iostream>

int main()
{
    int bin=0,dec,i=1,j;
    printf("enter a number to convert to binary: ");
    scanf("%d",&dec);
    while(dec>0)
    {
        bin=bin+(dec%2)*i;
        i=i*10;
        dec=dec/2;
    }
    printf("%d",bin);
    getch();
    return 0;
}
