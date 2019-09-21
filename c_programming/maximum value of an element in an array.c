#include<stdio.h>
#include<conio.h>
int main()

{
    int array[10]={1,2,30,50,2,1,9,5,6,3};
    int i,k=array[0];
    for(i=0;i<10;i++)
    {
         if(array[i]>k)
         k=array[i];
    }
    printf("%d",k);
    getch();
    return 0;
}
