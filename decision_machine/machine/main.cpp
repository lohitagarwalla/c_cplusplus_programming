#include <iostream>
#include <string>
#include "variable.h"
using namespace std;



int main()
{
	cout << "--------------------WELCOME--------------------" << endl;
    cout << "This machine will help you in making decisions"  << endl;
    string main_decision;
    getline(cin, main_decision );
    int final = decide(main_decision);
    if(final > 0)
    {
        cout << "system says YES to: " << main_decision << endl; 
    }
    else
    {
        cout << "system says NO to: " << main_decision << endl;
    }
	return 0;
}