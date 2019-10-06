// CPP program to illustrate 
// working of Virtual Functions 
#include<iostream> 
using namespace std; 

class base 
{ 
public: 
	void fun_1() { cout << "base-1\n"; } 
	virtual void fun_2() { cout << "base-2\n"; } 
	virtual void fun_3() { cout << "base-3\n"; } 
	virtual void fun_4() { cout << "base-4\n"; } 
    virtual ~base() {cout << "base destructor" << endl;}
}; 

class derived : public base 
{ 
public: 
	void fun_1() { cout << "derived-1\n"; } 
	void fun_2() { cout << "derived-2\n"; } 
	void fun_4(int x) { cout << "derived-4\n"; } 
    virtual ~derived() {cout << "derived destructor" << endl;}
}; 

int main() 
{ 
	base *p; 
	derived obj1; 
	p = &obj1; 

	// Early binding because fun1() is non-virtual 
	// in base 
	p->fun_1(); 

	// Late binding (RTP) 
	p->fun_2(); 

	// Late binding (RTP) 
	p->fun_3(); 

	// Late binding (RTP) 
	p->fun_4(); 
    
    delete p;
	// Early binding but this function call is 
	// illegal(produces error) becasue pointer 
	// is of base type and function is of 
	// derived class 
	//p->fun_4(5); 
    cout << "\n=====from video=======" << endl;
    
    base *p1 = new base();
    p1->fun_1();
    base *p2 = new derived();
    p2->fun_1();
//    p2->fun_2();
//    
    delete p1;
//    delete p2;
    
    return 0;
    
    
} 