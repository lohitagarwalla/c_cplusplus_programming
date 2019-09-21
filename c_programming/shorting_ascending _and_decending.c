#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20]={5,45,458,63,48,84,6,46,86,8,684,486,87,12,65,74,25,36,15,24};
    int i,j,d,b;
    printf("in decending order:\n");
    for(j=0;j<20;j++)
    for(i=0;i<19-j;i++)
    {
       if(a[i+1]>a[i])
       {
           d=a[i+1];
           a[i+1]=a[i];
           a[i]=d;
       }
    }    
    for(i=0;i<20;i++)
    printf("%d\n",a[i]);
    printf("in ascending order: \n");
    for(i=19;i>=0;i--)
    printf("%d\n",a[i]);
    getch();
    return 0;
}
