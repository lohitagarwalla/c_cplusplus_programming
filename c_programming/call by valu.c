#include<stdio.h>
#include<conio.h>
void call(int *);
int main()
{
    int a;
    
    scanf("%d",&a);
    call(&a);
    printf("       Value of a  =%d",a);
    getch();
    return 0;
}

void call(int *x)
{
    *x+=10;
    printf("Value of the Entered no. in the func.   =%d",*x);
    
}
    
