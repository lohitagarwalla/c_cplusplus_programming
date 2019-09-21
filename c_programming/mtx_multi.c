#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i,j;
    // scaning first matrix
    printf("enter the first matrix \n");
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
   //printing first matrix
   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }
    //scaning first matrix
    printf("enter the second matrix \n");
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
          scanf("%d",&b[i][j]);
    //printing second matrix
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        printf("%d  ",b[i][j]);
        printf("\n");
    }
    
     printf("\n\n");
     //calculating multiplication matrix
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
      {
          c[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
      }
    //printing multiplication matrix
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        printf("%d    ",c[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
