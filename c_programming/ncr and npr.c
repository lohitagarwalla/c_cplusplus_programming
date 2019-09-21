#include<stdio.h>
#include<conio.h>
int main()
{
    int n2,n,r,a,b,c,d;
    printf("n = ");
    scanf("%d",&n);
    n2=n;
    printf("c = ");
    scanf("%d",&r);
    //to find nPr
    for(a=1;n>0;)
    {
      a=a*n;
      n--;
    }
    c=n2-r;
    for(b=1;c>0;)
    {
      b=b*c;
      c--;
    }
    printf("nPr is %d\n",a/b);
    //to find nCr
    for(d=1;r>0;)
    {
      d=d*r;
      r--;
    }
    printf("nCr is %d\n",(a/b)/d);
    getch();
    return 0;
    }
