#include <iostream>
using namespace std;
#include<vector>
//shapes (abstrach class)
class Shapes
{
public:
    virtual void draw() = 0;         //pure abstract function
    virtual void rotate() = 0;       //pure abstract function
    virtual ~Shapes() { }
};

// open shapes:  derived class from shapes. 
class Open_shapes : public Shapes//abstract class
{
public:
    virtual ~Open_shapes() {}
};

// closed shapes:  derived class from shapes. 
class Close_shapes: public Shapes //abstrach class
{
public:
    virtual ~Close_shapes() {}
};

// concrete class (lines)
class lines : public Open_shapes
{
public:
    virtual void draw()
    {
        cout << "drawing lines " << endl;
    }
    virtual void rotate() 
    {
        cout << "rotate line" << endl;
    }
    virtual ~lines() {}
};

// concrete class (circles)
class Circles : public Close_shapes 
{
public:
    virtual void draw() override        //override is a keyword to make sure that virtual work even if sugnature doesn't match completely
    {
        cout << "drawing circles " << endl;
    }
    virtual void rotate() 
    {
        cout << "rotate circles" << endl;
    }
    virtual ~Circles() {}
};

// concrete class (squares)
class Squares : public Close_shapes
{
public:
    virtual void draw()
    {
        cout << "drawing Squares " << endl;
    }
    virtual void rotate() 
    {
        cout << "rotate squares" << endl;
    }
    virtual ~Squares() {}
};

int main()
{
//    Shapes d;  //error because shapes is a abstract class
    lines l;
    l.draw();
    l.rotate();
    
    Squares s;
    s.draw();
    s.rotate();
    
    Shapes *ptr = new lines();
    ptr->draw();  // dynamic binding
    ptr->rotate();
    
    delete ptr;
    
    Shapes *p1 = new Circles();
    Shapes *p2 = new Squares();
    Shapes *p3 = new lines();
    
    vector <Shapes *> shapes {p1, p2, p3};
    shapes[0]->draw();
    shapes[1]->rotate();
	
	return 0;
}