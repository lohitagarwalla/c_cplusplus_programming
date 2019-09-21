#include<stdio.h>
int main()
{
	int i, j=1, k=1;
	for(i=2;i>1;i++){
		j=j+i;
		k=k*i;
		if(j==k)
		{
			printf("%d   \n",j);
		}
		j=1;
		k=1;
	}
}
