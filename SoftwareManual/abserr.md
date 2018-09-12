**Routine Name:** abserr  
**Author:** Jared Lambert  
**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  
For example  
`g++ abserr.cpp`    
will produce an executable.  

**Description/Purpose:**   
This routine gives you an absolute error between a machine value and an expected value   

**Input:**  
There are two inputs, both doubles. The first input is the expected value. The second input is the machine value.  

**Output:**   
returns a double which is the absolute error.

**Usage/Example:**     


**code for hello:** 

```c++
#include <iostream>
#include <cmath>

double relerr(double expval, double machval)
{
  return std::abs(expval - machval);
}
```
