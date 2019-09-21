#include<stdio.h>
#include<conio.h>
int n;
int main()
{   
    printf("enter the number of rows on a diamond  ");
    scanf("%d",&n);
    int a,b,c,d;
    //upper trangle
    for(b=1;b<=n;b++)
    {
        for( c = (n-b) ;c>=0;c--)
        {
             printf(" ");
        }
        for(d=1;d<2*b;d++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for the middle line11
    int k;
    for(k=1;k<=n*2+1;k++)
    {
        printf("*");
    }
    printf("\n");
    //lower trangle
    int e,f,g,h,i,j;
    
    
    for(e=n-1;e>=0;e--)
    {
        for(g=n-e;g<2*(n-e);g++)
        {
             printf(" ");
        }
        for(h=2*e;h>=0;h--)
        {
            printf("*");
        }
        printf("\n");
    }
       
    getch();
    return 0;
}
