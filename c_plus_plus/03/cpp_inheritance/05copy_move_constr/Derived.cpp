#include "Derived.h"
#include "Base.h"

//no arg constructor
Derived::Derived()
:Base{}
{
    doubled_x = 0;
    cout <<"no arg  Derived constructor called" << endl;
}

//one arg constructor
Derived::Derived(int x_val)
: Base{x_val},doubled_x{2*x_val}
{
    cout << "one arg Derived class called" << endl;
}

//copy constructor
Derived::Derived(const Derived &source)
:Base(source)
{
    cout << "copy constructor Derived" << endl;
    doubled_x=source.doubled_x;
}

//move costructor
Derived::Derived(Derived &&source)
:Base(source)
{
    cout << "move constructor Derived" << endl;
    doubled_x = source.doubled_x;
}

//= operator
Derived &Derived::operator=(Derived &&source)
{
    cout << "= operator part r value type Derived" << endl;
    if(this != &source)
    {
        Base::operator =(source);
        doubled_x = source.doubled_x;
    }
     return *this;
}

// = operator
Derived &Derived::operator=(Derived &source)
{
    cout << "= operator part l value type Derived" << endl;
    if(this != &source)
    {
            Base::operator =(source);
            doubled_x = source.doubled_x;
    }
    return *this;
}
//destructor
Derived::~Derived()
{
    cout << "derived destructor" << endl;
}

