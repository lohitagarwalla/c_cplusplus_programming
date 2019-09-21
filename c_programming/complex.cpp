#include <stdio.h>
#include <stdlib.h>

typedef struct complex{
    int real;
    int img;
}complex;



int main() {
	int j, i;
	scanf("%d",&j);
	complex *ptr;
	complex result;
	result.img = 0;
	result.real = 0;
	
	ptr = (complex*) malloc (j * sizeof(complex));
	
	for(i=0;i<j;i++)
	{
	    scanf("%d",ptr[i].real);
	    //printf("%d \n", ptr[i].real);
	    scanf("%d",ptr[i].img);
	    //printf("%d \n", ptr[i].img);
	}
	
	for(i = 0; i<j; i++)
	{
		result.real += ptr[i].real;
		result.img += ptr[i].img;
	}
	
	printf("%d + i%d",result.real, result.img);
	return 0;
}
