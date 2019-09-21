#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a,b=0;
    scanf("%d",&n);
    int *p,*q,*r;
    p=&n;
    q=&a;
    r=&b;
    while(*p>0)
    {
        *q=*p%10;
        *r=(*r) * (10) + ( *q );
        *p=*p/10;
        
    }
    printf("%d",*r);
    
    getch();
    return 0;
}
