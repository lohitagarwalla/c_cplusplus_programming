#include<stdio.h>
#include<conio.h>
int main()
{
    int t,n;
    char s[100];
    printf("type a string to count number of vowels : ");
    gets(s);
    n=0;
    for(t=0;t<100;t++)
    {
       if(s[t]=='\0')
       break;
       if(s[t]=='a'  || s[t]=='e'  ||  s[t]=='i'  || s[t]=='o' || s[t]=='u'  ||  s[t]=='A'  || s[t]=='E'  || s[t]=='I'  || s[t]=='O'  || s[t]=='U')
       {
        n=n+1;
        }
    } 
      printf("Number of vowels in the typed string is %d",n);
    getch();
    return 0;
}
