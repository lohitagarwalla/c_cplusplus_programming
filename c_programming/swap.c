#include<stdio.h>
int main()
{
    char x[10];
    int i,n;

    printf("Enter your string:");
    for(i=0; i<10;i++)
        {
        scanf("%s",&x[i]);
        }
        printf("\n");
    for(i=0; x[i] != '\0' ;i++)
            {
               printf("%c",x[i]);
               }
               scanf("%d",&n);
      return 0;
      }
