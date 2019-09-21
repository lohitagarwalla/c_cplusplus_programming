//to programing to make a result 
#include<stdio.h>

int main()
{
int m1, m2, m3, total;
float percentage;
printf("please type your marks lohit\n\n");
scanf("%d%d%d",&m1,&m2,&m3);
total = m1 + m2 + m3;
printf("--------------\n");
printf("total marks obtained %d \n\n",total);
percentage = total / 3;
printf("percentage is %f \n\n",percentage);
if( percentage < 35 ){
    printf("fail");
    }
if( percentage >= 35 && percentage < 45 ){
     printf("passed 3rd division\t");
     }
if( percentage >= 45 && percentage < 60 ){
     printf("passed 2nd division\t");
     }
if( percentage >= 60 && percentage < 100 ){
     printf("passed 1st division");
     }
     getch();
     return 0;
}
