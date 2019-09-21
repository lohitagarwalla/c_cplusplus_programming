

#include<stdio.h>
#include<conio.h>
int largest(int a, int b);
int main()
{
    int a,b;
    printf("nter the two numbers to find the greate\n");
    scanf("%d%d",&a,&b);
    
    printf("the largest number is %d",largest(a,b));
    getch();
    return 0;
}
int largest(int a,int b)
{
    if(a>b){return a;}
    else{return b;}
}
