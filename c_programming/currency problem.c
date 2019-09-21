#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("number of humdred rupee notes is %d\n",num/100);
    printf("number of fifty rupee notes is %d\n",(num%100)/50);
    printf("number of ten rupee notes is %d",(num%50)/10);
    getch();
    return 0;
}
