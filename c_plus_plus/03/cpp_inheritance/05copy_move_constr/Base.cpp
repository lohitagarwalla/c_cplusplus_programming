#include "Base.h"
//no arg constructor
Base::Base()
{
    x = 0;
    cout <<"no arg  base constructor called" << endl;
}

//one arg constructor
Base::Base(int x_val)
{
    x = x_val;
    cout << "one arg base class called" << endl;
}

//copy constructor
Base::Base(const Base &source)
{
    cout << "copy constructor" << endl;
        x=source.x;
}

//move costructor
Base::Base(Base &&source)
{
    cout << "move constructor" << endl;
    x = source.x;
}

//= operator
Base &Base::operator=(Base &&source)
{
    cout << "= operator part r value type" << endl;
    
    x = source.x;
}

Base &Base::operator=(Base &source)
{
    cout << "= operator part l value type" << endl;
    if(this != &source)
        x = source.x;
    return *this;
}
//destructor
Base::~Base()
{
    cout << "base destructor" << endl;
}

