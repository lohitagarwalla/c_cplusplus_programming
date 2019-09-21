#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j;
printf("type the number you want the sum of digits\n");
scanf("%d",&a);
b=a/1000;
c=a/100-(b*10);
d=a/10-(b*100)-(c*10);
e=a-(b*1000)-(c*100)-(d*10);
f=b+c+d+e;
printf("%d\n",f);

getch();
return 0;
}
