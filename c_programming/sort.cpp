#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,j;
	cin >> t;
	int *ptr;
	ptr = new int{t};
	for(i=0; i<t; i++)
	{
	    cin >> *(ptr + i); 
	}
	int min_index,temp;
	for(i=0;i<t;i++)
	{
	    min_index = i;
	    for(j=i+1;j<t;j++)
	    {
	        if(*(ptr +j) < *(ptr + min_index))
	        {
	            min_index = j;
	        }
	    }
	    if(min_index > i)
	    {
	            temp = *(ptr + min_index);
	            *(ptr + min_index) = *(ptr +i);
	            *(ptr +i) = temp;
	            
	    }
	    for(i=0;i<t;i++)
	    {
	        cout << *(ptr + i)<< endl;
	    }
	        
	}
	return 0;
}
