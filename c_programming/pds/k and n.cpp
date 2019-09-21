#include<stdio.h>
#include<math.h>
int main()
{
	int n,p;
	double k,l;
	int i;
	double a,c;
	int b;
	char f[1];
	a = sqrt(2);
	printf("%f",a);
	for(n=1;n>0;n++){
		k=a*(n-1);
		k=k/360;
		b=k;
		c=k-b;
		
		printf("\nvalue of n: %d		value of k: %f",n,k);
	//	gets(f);
		//scanf("%d",&p);
		if(c==0){
			printf("whole value of n id: %d",n);
			scanf("%d",&p);
		}
		/*if(c<0.1){
			n=n+250;
		}*/
	}
}
