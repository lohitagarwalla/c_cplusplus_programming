#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,d,e,g,h,i,j,k;
scanf("%d",&a);
b = a % 3;
if(b==0){
     d=a/3;
     e = (3*d*(d+1))/2;   
     printf("%d",e);
     }

if(b==1){
     g=(a-1)/3;
     h=(3*g*(g+1))/2;   
     printf("%d",h);
     }
     

if(b==2){
     i=(a-2)/3;
     j=(3*i*(i+1))/2;   
     printf("%d",j);
     }
     



     



getch();
return 0;    
}
