#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const long double pi = 3.14159;

long double sinfunc(long double theta, int k);
int fact(int x);

int main()
{
    long double theta ;
    cout << "a machine to calculate sin of an angle: "<< endl;
    cout << "enter the value of thera in radian: " << endl;
    cin >> theta;
    long double sin_t = 0;
    for (int i=0; i<10; i++)
    {
        sin_t += sinfunc(theta, i);
    }
    cout << sin_t << endl;
	return 0;
}
 long double sinfunc(long double theta, int k)
 {
     if(fact(2*k+1) == 0)
         return 0;
     else
        return pow(-1, k)*pow(theta,2*k +1)/fact(2*k+1);
 }
 int fact(int x)
 {
     if(x >12 )
     {
         return 0;
     }
      else if(x!=0)
     {
         return x*fact(x-1);
     }
     else
     {
         return 1;
     }
 }