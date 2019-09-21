#include <stdio.h>

int main()
{
    int n,a,h,t,i;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d %d %d",&a,&h,&t);
    	
    	if(t>45)
    	{
    		float p= (h*h)/(2*a*tan(3.14*(t/180)));
    		a=p;
    		if(a==p)
    		{
    			printf("%d ",a);
    		}
    		else
    		printf("%d ",(p+1));
    	}
               	
        else
        {
        	float p=((2*h)-(a*tan(3.14*(t/180))))/(2);
        	a=p;
    		if(a==p)
    		{
    			printf("%d ",a);
    		}
    		else
    		printf("%d ",(p+1));
        }
          
    }
    return 0;
}
