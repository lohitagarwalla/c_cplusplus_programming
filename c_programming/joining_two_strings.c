#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j;
    char ch1[20]={"fuck "},ch2[10]={"you"};
    while(ch1[i]!='\0')
    {               
        i++;
    }
    
    for(j=0;ch2[j]!='\0';j++)
    {
        ch1[i]=ch2[j];
        i++;
    }
    ch1[i]='\0';
    puts(ch1);
    
    getch();
    return 0;
}
