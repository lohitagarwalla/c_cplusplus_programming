#include <iostream>
using namespace std;
    // dynamic memory allocation
    // memory allocation by this method is in heap
    
    //all the variable declared inside a function takes up memory from the heap
    // and heap is used used for dynamic memory allocation
    
int main() {
    
    int *new_ptr {nullptr};
    int siz {};
    
    cout << "enter the size of array: " ;
    cin >> siz;
    
    new_ptr = new int[siz];              // allocates memory in heap
    int i;
    int *ptr;
    ptr = new_ptr;
    for(i = 0; i<siz ; i++)
    {
        *ptr = 20;
        ptr++;
    }
    ptr = new_ptr;
    for (i = 0; i<siz ; i++)
    {
        cout << *ptr << endl ;
        ptr++;
    }
    
    for(i=0;i<siz ;i++)
    {
        *(new_ptr + i) = i*20;
    }
    for(i=0;i<siz ;i++)
    {
        cout << *(new_ptr + i)  << " " ;
    }
    
    cout << "the address of array is: " << new_ptr << endl; 
    cout << "size of array is " << siz << endl;
     
    delete [] new_ptr;                 // frees the allocated memory
    
    
	return 0;
}
