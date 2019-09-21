//to declare that you are an sdult or not
#include<stdio.h>
#include<conio.h>
int main()
{
int age;
printf("type your age\n");
scanf("%d",&age);
if( age >= 18 ){
    printf("you are an adult");
     }else {
          printf("you r a minor");
          }
    getch();
    return 0;
}
