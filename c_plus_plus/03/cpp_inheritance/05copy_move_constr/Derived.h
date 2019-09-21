#ifndef _DERIVED_H_
#define _DERIVED_H_
#include "Base.h"
class Derived : public Base{
public:
int doubled_x;
    Derived();//no arg constructor
    Derived(int x_val);//one arg constructor
    ~Derived (); // destructor
    Derived(const Derived &source); //copy constructor
    Derived(Derived &&source); //move constructor
    Derived &operator=(Derived &&source); // = operator for r value type
    Derived &operator=(Derived &source); // = operator for l value type
};


#endif // _DERIVED_H_
