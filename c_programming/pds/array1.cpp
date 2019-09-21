//array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//to make a one dimensional array and fint the missing number in the array from 1 to 10;
	int arr[10];
	for(int i = 0; i<5;i++){
		arr[i]=i+1;
	}
	arr[5]=7;
	for(int i=6;i<10;i++){
		arr[i]=i+2;
	}
	for(int i=0;i<10;i++){
		printf("%d  ",arr[i]);
	}
	
	
	for(int i=0;i<10;i++){
		if(arr[i]!=i+1){
			printf("\nThe missing numbers are\n%d ",i+1);
			break;
		}
	}
	
	//to make and insert elements in a 2 dimensional array
	int b=0;
	int ar[4][5];
	for(int i = 0; i<4; i++){
		for(int j=0; j<5; j++){
			b=i+j;
			ar[i][j]=b;
		}
	}
	
	// to print the elements of a 2 dimensional array
	for(int i = 0; i<4; i++){
		printf("\n");
		for(int j=0; j<5; j++){
			printf("%d ",ar[i][j]);
		}
	}
}
