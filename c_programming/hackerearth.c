#include <stdio.h>
#include<conio.h>
int main()
{
   int T,i,n;
   long long int g;
    scanf("%d",&T);
    while(T>0)
    {
    	scanf("%lld",&g);
        scanf("%d",&n);
    	if(g==1)
    	{
    		for(i=1;i<n;i++)
    		printf("%d ",2);
    		printf("3\n");
    	}
    	else
    	//{g=g*2;
    	{
        for(i=1;i<n;i++)
    	{
    		printf("%lld ",g*2);
    		
    	}
    	printf("%lld",g*3);
    	printf("\n");
     }
    	T--;
    }

getch();    
    return 0;
}
