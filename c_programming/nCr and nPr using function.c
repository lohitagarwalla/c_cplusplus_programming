#include<stdio.h>
#include<conio.h>
int factorial( int, int);
int main()
{
    int n,r;
    printf("n = ");
    scanf("%d",&n);
    printf("r = ");
    scanf("%d",&r);
    printf("nPr is %d\n",factorial( 1, n )/factorial( 1, (n-r) ));
    printf("nCr is %d",factorial( 1, n )/( factorial( 1, (n-r) ) * factorial( 1, r ) ));
    getch();
    return 0;
}
int factorial(int a, int x)
{
    for(a=1;x>0;)
    {
     a=a*x;
     x--;
}
return a;
}
