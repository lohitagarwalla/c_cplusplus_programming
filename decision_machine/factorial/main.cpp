#include <iostream>
#import "Factorial.h"
using namespace std;

int main()
{
//    Factorial fact;
    Factorial f;
    int i = 6;
    cout << f.fact(i) << endl;
    cout << f.fact(10) << endl;
    cout << f.fact(100) << endl;
    
    return 0;
}
