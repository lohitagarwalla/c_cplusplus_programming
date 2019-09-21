#include<stdio.h>
#include<conio.h>
long int main()
{
int t,a,b,c,d,count;

a=0;
b=1;
printf("number of fibonacci terms\t");
scanf("%d",&t);
int fibonacci[t];
count=0;
while(count<t){
                c=a+b;
                a=b;
                b=c;
                fibonacci[count]=c;
                count++;
                printf("%d\n",c);
                }
scanf("%d",&d);

printf("the %dth term is %d",d,fibonacci[d-1]);
    
    getch();
    return 0;
    }
