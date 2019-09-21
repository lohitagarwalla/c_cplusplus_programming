#include<stdio.h>
#include<conio.h>
int main()
{
    printf("enter a string to count vowels in it\n"); 
    int i=0,j=0;
    char ch[50];
    gets(ch);
    while(ch[i]!='\0')
    {
        if(ch[i]=='U' ||  ch[i]=='O' ||  ch[i]=='I' ||  ch[i]=='E' ||  ch[i]=='A' ||  ch[i]=='u' ||  ch[i]=='o' ||  ch[i]=='i' ||  ch[i]=='e' ||  ch[i]=='a'  )
        j++;
        
        i++;
    }
    printf("\nthe number of vowels in the entered string is %d",j);
    
    getch();
    return 0;
}
