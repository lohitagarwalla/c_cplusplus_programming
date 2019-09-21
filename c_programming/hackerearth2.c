#include <stdio.h>

int main()
{
   int T,i,k,l;
   int a,b,c;
   scanf("%d",&T);
   while(T>0)
   {
   	    scanf("%d%d%d",&a,&b,&c);
   	    if(a<b)
   	    {
   	    	if(a<c)
   	    	l=a;
   	    	else{l=c;}
   	    }else{
   	    	if(b<c)
   	    	l=b;
   	    	else{l=c;}
   	    }

   	    for(i=l;i>0;i--)
   	    {
            if(a%i==0 && b%i==0 && c%i==0)
            {
                k=(b/i)*(c/i)*(a/i);
                printf("%d %d\n",i,k);
                break;
            }
        }
   	
   	 	T--;
   }

    return 0;
}
