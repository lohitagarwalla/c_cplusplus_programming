#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={1,453,64452,2,5};
    int *p,i;
    p=&a[0];
    for(i=0;i<5;i++)
    {
        if(*p<a[i])
        p=&a[i];
    }
    printf("%d",*p);
    
    getch();
    return 0;
}
