#include<stdio.h>
#include<conio.h>
int main()
{
    int k,l,i,j,m,n,x,y, mat1[3][3], mat2[2][2];
    // for scanning mat1
  /*  for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&mat1[i][j]);
    // for printing mat1
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d  ",mat1[i][j]);
        printf("\n\n");    
    }
    // detrminant of mat1
  |1  2|
    |3  4|
    det=a[00]*a[1][1]-a[0][1]*a[1][0]  
    
    |00  01  02|
    |10  11  12|
    |20  21  22|            */
    k=0;
    l=0;
      for(m=0;m<2;m++)
      {  
        for(n=0;n<2;n++)
        {
          for(k=0;k<3;k++)
          { 
            for(l=0;l<3;l++)
            { 
              if(k==0 || l==0){continue;}
              printf("\n%d%d    %d%d",m,n,k,l);
            }
          }
        }
      }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d  ",mat2[i][j]);
        printf("\n\n");
    }
    getch();
    return 0;
}
