#include <iostream>
using namespace std;

int add(int a,int b);
double add(double a, double b);

int main() {
	
	//overloading functions.
	// using same name for various functions. so that we dont have to think of many names.
	// different functions must have different data types that will be passed to it.
	
	cout << add(3 , 4) << endl;             //here int verseion will be used
	
	cout << add (3.5 , 4.2) << endl;       //here double version will be used
	
	return 0;
}

int add(int a,int b)
{
    cout << "from int: " ;
    return a + b;
}
double add(double a, double b)
{
    cout << "from double: " ; 
    return a + b;
}