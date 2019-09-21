#include<iostream>

using namespace std;
void func2(int &i);
void func1(int &i)
{
	cout << "from func1  "  << i<<  endl;
	i++;	
	func2(i);
}

void func2(int &i)
{
	cout << "from func2  " << i <<  endl;
	i++;
	func1(i);
}

int main()
{
	int i = 0;
	func1(i);
	
	return 0;
}
