#include<stdio.h>

int main()
{          
           int c=0,i,p;
           char n[10],m[10];
           printf("Enter the Word\n");
           gets(&n);
           for(i=0;n[i]!='\0';i++)
           {
                   c++;
           }
           p=c;
           for(i=0;i<=p;i++)
           {
                   m[i]=n[c-i];
                   
           }
           m[i]='\o';
           
           for(i=0;n[i]!='\0';i++)
           {
                   printf("%c",m[i]);                       
           }
           printf("%c",m[c]);
           
           
           getch();
           return 0;
}              
