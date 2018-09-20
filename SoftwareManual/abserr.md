# Math 4610 Fundamentals of Computational Mathematics Software Manual ABSERR File

**Routine Name:**           abserr

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ abserr.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o abserr abserr.cpp

**Description/Purpose:** This routine gives you an absolute error between a machine value and an expected value   
    


**Input:** There are two inputs, both doubles. The first input is the expected value. The second input is the machine value.  


**Output:** returns a double which is the absolute error.
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
std::cout << abserr(1.0, 1.1);
```
and the output for this line will look like:    
```
0.1
```  

which is the absolute error between the two values.

**Implementation/Code:** The following is the code for abserr()
``` c++
#include <iostream>
#include <cmath>

double relerr(double expval, double machval)
{
  return std::abs(expval - machval);
}

```
**Last Modified:** September/2018
