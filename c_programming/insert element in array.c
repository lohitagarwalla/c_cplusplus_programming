#include<stdio.h>
#include<conio.h>
int main()
{
    printf("enter the number if elements in array : ");
    int n,i,j;
    scanf("%d",&n);
    printf("enter the elements : \n");
    int array[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&array[i]);
    printf("enter the position where you want to enter a element : ");
    scanf("%d",&i);
    for(j=n;j>=i;j--)
      array[j]=array[j-1];
    printf("enter the element : ");
    scanf("%d",&array[i]);
    printf("the new array is \n");
    for(i=0;i<=n;i++)
     printf("%d\n",array[i]);
    

    getch();
    return 0;
}
