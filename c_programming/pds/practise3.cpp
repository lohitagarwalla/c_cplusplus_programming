#include<stdio.h>
int main(){
	int i=100,a=1;
	if(i%2==0){
		for(int j=0;j<i/2;j++){
			a=(5*(2*j))+1;
			for(int k=0;k<5;k++){
				printf("%d",a);
				a++;
				if(k!=4){
					printf("*");
				}
			}
			printf("\n");
		}
		for(int j=0; j<i/2; j++){
			a=(5*(i-(2*j)))-4;
			for(int k=0; k<5; k++){
				printf("%d",a);
				a++;
				if(k!=4){
					printf("*");
				}
			}
			printf("\n");
		}
	}
	if(i%2!=0){
		for(int j=0;j<i/2+1;j++){
			a=(5*(2*j))+1;
			for(int k=0;k<5;k++){
				printf("%d",a);
				a++;
				if(k!=4){
					printf("*");
				}
			}
			printf("\n");
		}
		for(int j=0; j<i/2; j++){
			a=(5*(i-1-(2*j)))-4;
			for(int k=0; k<5; k++){
				printf("%d",a);
				a++;
				if(k!=4){
					printf("*");
				}
			}
			printf("\n");
		}
	}
}

