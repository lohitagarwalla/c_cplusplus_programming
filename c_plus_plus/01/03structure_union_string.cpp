#include <iostream> 		//headerfile
#include <string>   		//headerfile
#include <cmath>
//include "name.h"			//headerfile created by programmer to be included in the project. this should be inside a double quote

using namespace std;  		//this lets us use cin and cout without using "std::" each time we use cin and cout

struct student{				//simple structure
	string name;
	int classs;
	int marks;
	
}two, three; 				//declaring struct student variables

typedef struct{				//using typedef. this complex a data type
	int real;
	int img;
} complex;

union my_union{				// unions are similar to structures. The only difference is that all the variables in union share the same memory.
	int x;					// The total memory of the union is the memory of largest data type in it
	int y;					// changing the value of one variable will change the value other variable. because they share same memory location
};

const double pi = 3.14;		//const is a keyword and can be defined locally
#define MAX 5				//it is a macro and it is global 

void print_student(struct student one);
void read_student(struct student* one);
void print_complex(complex& num);
void swap_real_img(complex& num);						//using passing parameter by reference;

int main()
{
/* strings
	
	string 	name("lohit agarwalla");
//	string	line(40, "=");								//should print ==================================. but it does not work in this compiler
	string	sentence;
	cout << name << endl;
	getline(cin, sentence);								// can use cin >> sentence;  but it will terminate after space key is pressed.	
	cout << sentence << endl;
	//read the ducument in the following page for most used string functions.
	//https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf  
*/
	
/*  using cmath library

	double i=5,j=3,k=2;
	cout << "using pow(3,2): " << pow(j,k) << endl;     //pow returns a value of type double
	cout << "using sin(pi/6): "  << sin(pi/6) << endl;
	// few more cmath functions: cos(), tan(), sqrt(), etc.
*/
	
/*  structures, typedef, passing by reference, pointers, using "->"

	struct student one;									//declaring student variable
	read_student(&one);   								//read function. by using pointers.
	print_student(one);									//without using pointers

	
	complex cnum;
	cnum.img = 5;
	cnum.real = 2;
	print_complex(cnum);
	swap_real_img(cnum);
	print_complex(cnum);
	swap_real_img(cnum);
	print_complex(cnum);
	return 0;
*/

/*	unions

	union my_union check;
	check.x = 45;
	cout << "value of x: " << check.x << endl;
	cout << "value of y: " << check.y << endl;
	check.y = 3;
	cout << "value of x: " << check.x << endl;
	cout << "value of y: " << check.y << endl;
*/	
}

void print_complex(complex& num)
{
	cout << "the complex number is: " << num.real << " + i" << num.img << endl;
}

void swap_real_img(complex& num)				//using passing parameter by reference;
{
	int temp;
	temp = num.img;
	num.img = num.real;
	num.real = temp;
}

void print_student(struct student one)
{
	cout << "Name of student: " << one.name << endl;
	cout << "class: " << one.classs << endl;
	cout << "marks: " << one.marks << endl;
}

void read_student(struct student* one)
{
	cout << "Enter name of student: ";
	getline(cin, one->name); 					//reading a string from user
	cout << "enter class: ";
	cin >> one->classs;
	cout << "enter marks: ";
	cin >> one->marks;
}







