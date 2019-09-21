#include<stdio.h>
#include<conio.h>
int main()
{
int number1,number2,i,a,b,c;
printf("type two numbers to get lcm and hcf\n");
printf("tpye the first number\t");
scanf("%d",&number1);
printf("tpye the second number\t");
scanf("%d",&number2);
          for(i=1;i>=1;i++)
          {
                            a=i%number1;
                            b=i%number2;
                            if(a==0 && b==0)
                            {
                                                    break;
                            }                      
           }
                            
                            printf("the lcm is %d\n",i);
                          
                for(i=number1;i>=1;--i)
                {
                                         a=number1%i;
                                         b=number2%i;
                                         if(a==0 && b==0)
                                         {
                                                          break;
                                         } 
                } 
                printf("the hcf is %d",i);
               
    getch();
    return 0;
    }
