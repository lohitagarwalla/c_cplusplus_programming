#include<stdio.h>
#include<conio.h>
int main()
// to check if two strings are same
{
    char ch1[100], ch2[100];
    int i;
    printf(" enter the first string :  ");
    gets(ch1);
    printf("enter the second string :  ");
    gets(ch2);
    for(i=0;i<100;i++)
    { 
      if(ch1[i]=='\0' && ch2[i]=='\0')
      {
        printf("the entered strings are same");
        break;
      }
      if(ch1[i]!=ch2[i])
      {
        printf("the entered strings are different");
        break;
      }
    }
    getch();
    return 0;
}
