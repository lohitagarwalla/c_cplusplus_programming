#ifndef _FACTORIAL_H_
#define _FACTORIAL_H_

class Factorial
{
private:
    int i;
    int result;
public:
    Factorial();
    ~Factorial();
    int fact(int i)
    {
        if(i >0 )
            return i * fact(i-1);
        else
            return 1;
    }

};

#endif // _FACTORIAL_H_
