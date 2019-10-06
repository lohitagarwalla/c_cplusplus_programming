#include <iostream>
using namespace std;
// understanding problems with static binding

class Base
{
public:
    void say_hello( ) const
     {
        cout << "base class member says hello" << endl;
    }
};

class Derived: public Base
{
public:
    void say_hello() 
    {
        cout << "base derived member says hello" << endl;
    }
};

void greetings(const Base &obj)
{
    cout << "greetings" << endl;
    obj.say_hello();
}

int main()
{
	Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d);   // here is the problem. we are passing an object of class derived. But it is calling a Base class object. Because the \
                                function expects a object of class base. Since derived is a base (inheritance) so it calls the base object\
                                This is happening due to static binding. This can be solved by dynamic binding. This is where polymorphism comes in.
    
    Base *ptr = new Derived();
    ptr->say_hello();  // here also same thing happens as explained above.
     
    
    
	return 0;
}
