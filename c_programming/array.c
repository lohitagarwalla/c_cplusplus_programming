#include<stdio.h>
#include<conio.h>
int main()
{
int size,count;
printf("type the number of marks you want to enter ");
scanf("%d",&size);
int marks[size];

for(count=0;count<size;count++)
      {
      scanf("%d",&marks[count]);
      }
for(count=0;count<size;count++)
{
      printf("the mark at %d is %d\n",count,marks[count]);
      }
      
getch();
return 0;
}
