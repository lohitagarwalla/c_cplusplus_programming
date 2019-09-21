#ifndef _BASE_H_
#define _BASE_H_
#include <iostream>
using namespace std;

class Base
{
public:
int x;
    Base();//no arg constructor
    Base(int x_val);//one arg constructor
    ~Base (); // destructor
    Base(const Base &source); //copy constructor
    Base(Base &&source); //move constructor
    Base &operator=(Base &&source); // = operator
    Base &operator=(Base &source);
};

#endif // _BASE_H_
