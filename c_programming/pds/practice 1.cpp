#include<stdio.h>
int main()
{
	int arr[10];
	for(int i = 0;i<10;i++){
		arr[i]=i+1;
	}
	for(int i=0;i<=10;i++){
		for(int j=9;j>i;j--){
		printf("	");
	}
		printf("%d\n",arr[i]);
	}

}
