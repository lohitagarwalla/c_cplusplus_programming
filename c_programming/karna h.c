#include <stdio.h>

int main()
{
    int n,k,i,p=0;
    
    scanf("%d %d",&n,&k);
    
    if(k>81)
    	printf("-1");
    else
    {
    	x=k;
    	while(x>0)
    	{
    		p=p+(x%10);
    		x=x/10;
    	}
    	
    	if(k>=(10*(k/10))&&k<(11*(k/10)))
    	{
    		p=p-1;
    	}
    	else if(k==(11*(k/10)))
    	{
    		p=p+1;
    	}
    	
    	for(i=0;i<n;i++)
    	{
    		if((i%2)==0)
    		printf("1");
    		else
    		printf("%d",p);
    	}
    }
    return 0;
}
