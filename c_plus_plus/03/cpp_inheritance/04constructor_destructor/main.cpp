#include <iostream>
using namespace std;
//when we call the derived class then it first initializes bases class constructor and then derived class constructor is called.
//this can be understood by the following example.
class Base{
public:
    int x;
    Base()
    {
        cout << "no argument base class constructor called" << endl; 
    }
    Base(int x)
    {
        cout << "one argument base class constructor called" << endl; 
    }
    ~Base()
    {
        cout << "base class destructor called" << endl;
    }
};

class Derived : public Base
{
public:
int doubled_x;
    Derived()
    :Base()
    {
        cout << "no arg derived class constructor called" << endl;
    }
    Derived(int x)
    :Base(x), doubled_x{2*x}
    {
        cout << "one arg derived class constructor called" << endl;
    }
    ~Derived()
    {
        cout <<"derived class destructor called" << endl;
    }
};


int main()
{
    {  Base B; }
	{      Derived D; }
    {
        Base c;
        Derived E;
    }
    
    cout << "\n" << "\n" << endl;
     {  Base B{60}; }
	{      Derived D{90}; }
    {
        Base c{80};
        Derived E{4};
    }
    
    
	return 0;
}
