//to print the sum of digits of a max of 6 digit number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int b,d,e,g,h,i,j,k;
    scanf("%d",&b);
    e=b%10;
    k=b/100000;
    j=(b/10000)-(k*10);
    i=(b/1000)-(k*100)-(j*10);
    h=(b/100)-(k*1000)-(j*100)-(i*10);    
    d=(b/10)-(h*10)-(i*100)-(j*1000)-(k*10000);            
    g=h+i+j+k+d+e;
    printf("%d",g);
    
    
    getch();
    return 0;
}
