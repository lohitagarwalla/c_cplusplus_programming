#ifndef _VARIABLE_H_
#define _VARIABLE_H_
#include <string>
#include <iostream>
using namespace std;

class variable
{
private:
    string *name;
    int *weight;
    int *yorn;
public:
    variable(string str_name="none",int weight_val = 0);
    int get_weight()
    {
        return *weight;
    }
    ~variable();
};

#endif // _VARIABLE_H_
