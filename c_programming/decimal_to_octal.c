#include<stdio.h>
#include<conio.h>
int main()
{
    printf("type a number to convert to octal : ");
    int num,rem,octal=0, base=1;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%8;
        octal=octal+rem*base;
        num=num/8;
        base=base*10;
    }
    printf("num in octal form is %d",octal);
    getch();
    return 0;
}
