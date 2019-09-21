#include <iostream>
using namespace std;
int *multipy(int *ptr_arr1,int i, int *ptr_arr2, int j);
void print(int *ptr, int i);
int main() {
	int arr1[] {1,2,3,4,5};
	int arr2[] {10,20,30};
	int *ptr_arr1, *ptr_arr2;
	ptr_arr1 = arr1;
	ptr_arr2 = arr2;
	int *ptr = multipy(ptr_arr1,5,ptr_arr2,3);
	print(ptr,15);
	return 0;
}

int *multipy(int *ptr_arr1,int i, int *ptr_arr2, int j)
{
    int *ptr;
    int x,y,z=0;
    ptr = new int[i*j];
    for(x= 0; x<j; x++)
    {
        for(y=0; y<i;y++)
        {
            ptr[z] = ptr_arr1[y] * ptr_arr2[x];
            z++;
        }
    }
    return ptr;
}

void print(int *ptr, int i)
{
    int k=0;
    while(k<i)
    {
        cout << ptr[k] << endl;
        k++;
    }
}
