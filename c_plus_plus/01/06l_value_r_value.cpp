#include <iostream>
using namespace std;
// l-value and r-value
int main() {
	int x = 100;            // x is l-value, because x can be assigned a value 
	string s = "Lohit";     // s is l-value, because s can be assigned a value
	int y = x + 100;        // y is l-value, because y can be assigned a value
	
	
	//any thing that is not a l-value is r-value
	100=x;                  // 100 cannot be assigned a value so it is a r-value
	x+10 =y;                // x+10 is a r-value, because it cannot be assigned                     //     a value
	"lohit"                 // it is a r-value, because it cannot be assigned a                     //  value
	return 0;
}
