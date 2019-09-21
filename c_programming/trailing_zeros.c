#include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i]%s[j]==0 && i!=j)
			break;
			if( n == (j+1) )
			printf("%d ",s[i]);
		}
	}
 getch();
  
   return 0;
}
