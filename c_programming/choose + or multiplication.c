#include<stdio.h>
#include<conio.h>
int main()
{
    printf("operation 1=+   2=* \n number \n");
int b,z,d,e,g,h,i,j,k,l,m,o,p;
scanf("%d%d",&b,&z);
if(b==1){
    d=z*(z+1)/2;
    printf("%d",d);
    }
    
if(b==2){
         
    p=1;
     while (z>0){ 
           p=p*z;
           --z;
           }
           printf("%d",p);
     }

    getch();
    return 0;
}
