// to check weather the sum of two num is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
int num1, num2, num3, result;
printf("type your numbers \n");
scanf("%d%d",&num1,&num2);

num3 = num1 + num2;
printf("suum of the two numbers is %d \n",num3);
result = num3 % 3;
printf("remainder when divided by 3 is %d \n",result);
if( result >=1 ){
    printf("sum is not divisible by 3");
    }else{
    printf("sum is divisible by 3");
    }
    
    getch();
    return 0;
}
