#include <iostream>
#include "Base.h"
#include "Derived.h"
using namespace std;
int main()
{
	Base b{};
    Base c{10};
    Base d{c};
    b=Base{50};
    cout << b.x << endl;
    b=c;
    cout << b.x << endl;
    
    Derived b2{};
    Derived c2{10};
    Derived d2{c2};
    b2=Derived{50};
    cout << b2.x << endl;
    b2=c2;
    cout << b2.x << endl;
	return 0;
}
