#include<stdio.h>
#include<conio.h>
int main()
{
int b,d,e,h,i,j,k;
k=1;
printf("type the number upto which you want prime numbers:  ");
scanf("%d",&b);
printf("\nthe numbers are\n");
while(k>=1){
      for( j=2; j<=k; j++){
           i=k%j;
           if( i==0 && j<k ){
                break;
                }
           if( i!=0 && j<k ){
            continue;    
                }
            if( j==k ){
              printf("%d\n",k);    
                }
           }
           k++;
           if(k>b){
              break;  
                }
      }
    


getch();
return 0;
}
