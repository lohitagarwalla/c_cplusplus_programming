#include<iostream>

using namespace std;
void func2(int &);
void func1(int &i)
{
	cout << "from func1  "  << i<<  endl;
	i++;
	if(i>=100)
		cout << "cunction is complete";
	else
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
	cout << "the final value of i is : " << i << endl;
	
	return 0;
}
