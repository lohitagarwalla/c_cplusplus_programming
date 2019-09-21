#include<stdio.h>
#include<conio.h>
int main()
{
    int temp,l,array[10]={5,4,6,5,7,56,7,3,5,56}, i,j,k;
    for(i=0;i<10;i++)
    {
       k=array[i];
       for(j=i;j<10;j++)
       {
           if(array[j]>k)
           k=array[i];
       }
       temp=array[i];
       array[i]=k;
       for(l=i;l<10;l++)
       {
          if(array[l]!=k){array[l]=temp;break;}
       }
    }
    for(i=0;i<10;i++)
    printf("%d\n",array[i]);
    getch();
    return 0;
}
