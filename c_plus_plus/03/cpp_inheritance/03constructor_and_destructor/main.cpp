#include <iostream>
using namespace std;
//when we call the derived class then it first initializes bases class constructor and then derived class constructor is called.
//this can be understood by the following example.
class Base{
public:
    Base()
    {
        cout << "base class constructor called" << endl; 
    }
    ~Base()
    {
        cout << "base class destructor called" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "derived class constructor called" << endl;
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
    
    
	return 0;
}
