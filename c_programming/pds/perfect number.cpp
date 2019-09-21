#include<stdio.h>
int main()
{
	int i,j,k;
	for(i = 3; i>1 ; i++){
			k=1;
			for(j=2; j<i; j++){
				if(i%j==0)
				{
				k=k+j;
				}
			}
			if(k==i)
			{
				printf("%d /n  ",i);
			}
	}	
}
