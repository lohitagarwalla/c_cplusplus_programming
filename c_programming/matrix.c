#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3], b[3][3];
    int i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);  
        }
        printf("\n\n");
    }
    
    //TRANSPOSE OF a
/*    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d  ",b[j][i]);
        }
        printf("\n\n");
    }
*/
    int c[3][3], d[3][3];
    
    
         
    getch();
    return 0;
}
