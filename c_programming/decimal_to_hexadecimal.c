#include<stdio.h>
#include<conio.h>
int main()
{     
    printf("enter a number to convert to hexadecimal : ");
    int num,i,array[20];
    scanf("%d",&num);
    for(i=0;i<20;i++)
    {
        array[i]=num%16;
        num=num/16;
    }
    for(i=19;i>=0;i--)
    {
        if(array[i]==10) {printf("A"); continue;}
        if(array[i]==11) {printf("B"); continue;}
        if(array[i]==12) {printf("C"); continue;}
        if(array[i]==13) {printf("D"); continue;}
        if(array[i]==14) {printf("E"); continue;}
        if(array[i]==15) {printf("F"); continue;}
        else{printf("%d",array[i]);}
    }
    getch();
    return 0;
}   
