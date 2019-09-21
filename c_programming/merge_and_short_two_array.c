#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={3,8,4,9,20};
    int b[6]={1,2,15,20,27,35};
    int j,i,d,c[11];
    for (i=0;i<5;i++)
        c[i]=a[i];
    for(i=5;i<11;i++)
        c[i]=b[i-5];
    for(i=0;i<11;i++)
        for(j=0;j<10-i;j++)
        {
            if(c[j]>c[j+1])
            {
                d=c[j];
                c[j]=c[j+1];
                c[j+1]=d;
            }
        }
    for(i=0;i<11;i++)
    printf("%d\n",c[i]);
    
    getch();
    return 0;
}
