#include<stdio.h>
#include<conio.h>
int main()
{
    char a[50];
    int i,j=0,k;
    for(i=0;i<50; )
    {
        scanf("%c",&a[i]);
        if(a[i]==' ')
        break;
        i++;
    }
    i=i-1;
    
    if(a[i]=='m' && a[i-1]=='o' && a[i-2]=='c' && a[i-3]=='.')
    j++;  //j=1
    
    for( ;i>=0;i--)
    {
        if(a[i]=='@')
        j++;  //j=2
        
        if(a[i]==' ')
        j=j-1;
    }
    if(j==2)
    printf("correct");
    
    if(j!=2)
    printf("incorrect");
    getch();
    return 0;
}
