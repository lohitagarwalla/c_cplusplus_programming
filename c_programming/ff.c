#include <stdio.h>
#include<conio.h>

int main()
{
    int n,r=1,count=0,i,c,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    while(c!=1)
    {
    	c=0;
    	
    	k=r*r;
    	while(k>=0)
    	{
    		if(k!=0)
    		{
    			for(i=0;i<n;i++)
    			{
    				if(a[i]==k)
    				{
    					count=count+((r*r)-k);
    					a[i]=0;
    					k=-1;
    				}
    			
    			}
    		}
    		
    		else if(k==0)
    		{
    			count=count+(r*r);
    			break;
    		}
    		
    		k--;
    	}
    	
    	r++;
    	
    	
    
    for(i=0;i<n;i++)
    {
    	if(a[i]!=0)
    	{
    		c=1;
    		break;
    	}
    }
    
    }
    
    printf("%d",count);
    getch();
    return 0;
}
