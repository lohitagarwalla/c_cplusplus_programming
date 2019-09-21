#include<stdio.h>
#include<conio.h>
int main()
{
int b;
scanf("%d",&b);
while(b>1){
           b++;
           printf("%d\n",b);
           if(b>=100)
           {
               break;
               }
        }
getch();
return 0;
}
