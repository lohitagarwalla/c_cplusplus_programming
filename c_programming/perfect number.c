#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
                      g=b/1000;
                      c=(b/100)-(g*10);
                      d=(b%100)/10;
                      e=b%10;
                      f=(c*c*c)+(d*d*d)+(e*e*e)+(g*g*g);
                      if(b==f){printf("%d\n",b);}
                      }
    
    
    getch();
    return 0;
    }
