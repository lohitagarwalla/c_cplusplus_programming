#include "variable.h"

variable::variable(string str_name="none",int weight_val = 0)
{
    name = new string;
    *name = str_name;
    
    weight_val = new int;
    *weight = weight_val;
}

variable::~variable()
{
    cout << "destructor called " << endl;
    delete name;
    delete weight;
}

