#include <stdio.h>
#include<conio.h>
int main()
{
   int T,i;
   int a,b,c,d,k,t,m;
   scanf("%d",&T);
   for(i=1;i<=T;i++)
   {
   	scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
   	t=1;
   	while(t>=1)
   	{
   		m=(a*t*t*t)+(b*t*t)+(c*t)+d;
   		if(m>k)
   		{
   			printf("%d\n",t-1);
   			break;
   		}
   		t++;
   	}
   	
   }
   getch();
   return 0;
}
