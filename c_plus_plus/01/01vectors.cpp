#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    //vectors are dynamic so it can increase and decrease its size.
    //vectors are implemented by class. so it has a lot of methods push_back, size, sort, reverse etc.
	vector <int> my_vector;         // declaring a vector of type int
	vector <char> vowels (5);       // declaring a char type vector of size 5
    vector <int> test {3,5,6,2,7};  // declaring and initializing vector of size 5
    
    cout << test[3] << endl;        //accessing vector element using array syntax
    cout << test.at(1) << endl;     //accessing vector element using vector syntax
    cout << "the size of the vector is: " << test.size() << endl; //size of the vector
    
    int num = 10;
    test.push_back(num);            //inserting a number at the end of vector
    cout << test.at(5)<< endl;
    test.push_back(12);
    cout << "new size of vector is: " << test.size() << endl; // new size of vector
    
    vector <vector <int>> my_vec; //declaring 2d vector of type int
    my_vec = {                  // initializing 2d vector
        {1,3,45},
        {2, 5, 7}
    };
    cout << my_vec[0][1] << endl; //accessing using array method
    cout << my_vec.at(1).at(2) << endl; // accessing using vector method
    
    for(auto s: test)
        cout << s << endl;
    
    
	return 0;
}
