#include<stdio.h>
#include<conio.h>
int main()

{
   
    char ch[50];
    int j,i=0,k; 
    printf("enter a string or a number to check if it is a palindrome or not:\n");
    gets(ch);
    while(ch[i]!='\0')  
    {
        i++;
    }
    k=i-1;
    for(j=0;j<=k;j++)
    {
        if(ch[j]!=ch[i-1])
        {
          printf("the entered string is not a palindrome");
          break;
        }
        i--;
    }
    if(j==k+1)
    {
        printf("the entered string is a palindrome");
    }
    getch();
    return 0;
}
