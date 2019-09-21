#include<stdio.h>
int main()
{
    int i=5,a,l=1;
    a=i*(i+1);
    a++;
    for(int j=i; j>=1; j--){
    	for(int m=j; m<i; m++)
    	printf("--");
    	for(int k=1; k<=j; k++){
    		printf("%d*",l);
    		l++;
		}
		a=a-j;
		for(int k=1; k<=j; k++){
    		printf("%d",a);
    		a++;
    		if(k!=j){
    			printf("*");
			}
		}
		a=a-j;
		printf("\n");
 	}
}
