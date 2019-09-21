#include<stdio.h>
#include<conio.h>
int main()
{                                                                          
    int i=0,j;
    char ch[50],ch2[50];
    char af;
    printf("enter the string to calculate its length: \n");
    gets(ch);
    while(ch[i]!='\0')
    {
        i++;
    }
    printf("The length of the typed string is : %d\n",i);
    
    printf("to copy the string to another press '1'\n");
    scanf("%d",&i);
    if(i==1)
    {
       for(i=0;ch[i]!='\0';i++)
       {
          ch2[i]=ch[i];
       }
       printf("\nthe copied string is :\n");
       puts(ch2);
    }
    printf("\ntype the letter you want to count its occurance in the string:\n");
    scanf("%c",&af);
    i=0;
    j=0;
    while(ch[i]!='\0')
    {
        if(ch[i]==af)
        j++;
        
    }
    printf("the number of occurance of %c = %d",af,j);
    
    getch();
    return 0;
}
