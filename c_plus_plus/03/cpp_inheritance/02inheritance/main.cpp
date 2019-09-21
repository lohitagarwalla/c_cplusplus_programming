#include <iostream>
using namespace std;

//there are base class and derived class
//the derived class has access to base class,  but base class does not have access to derrived class.
//there are three access modifiers pubic, private and protected
//case 1 when base class access modified as public then
    // public(from base) will be public in derived class
    // protected(from base) will be protected in derived class
    // private(from base) will not be accessibe in derived class
//case 2 when base class access modifier is protected then
    // public(from base) will be protected in derived class
    // protected(from base) will be protected in derived class
    // private(from base) will not be accessibe in derived class
// case 2 when base class access modifier is private in derived class
    // public(from base) will be private in derived class
    // protected(from base) will be private in derived class
    // private(from base) will not be accessibe in derived class

// here we will see an example of public access modifier
class Base{
public:
    int a;
    Base()
    {
        a = 10;
        b= 20;
        c = 30;
    }
protected:
    int b;
private:
    int c;
};
class Derived : public Base{  //public access modifier
public:
    void print_b()
    {
        cout << b << endl;
    }
    void print_c()
    {
        cout << c << endl;
    }
};
int main()
{
	Base B;
    cout << B.a << endl;
//    cout << B.b << endl;      // compiller error
//    cout << B.c << endl;        // compiller error
    
    Derived D;
    cout << D.a << endl;
//    cout << D.b << endl;     compiller error because b is protected in D. 
//    cout << D.c << endl;  //compiller error because c is private in base class and is not accessible directly to any class.
    D.print_b(); // correct because b is accessible to derived class because b is in protected in base class.
//    D.print_c(); // compiller error because c is not accessible to derived class because it is in private in base class.
	return 0;
}
