**Routine Name:** relerr  
**Author:** Jared Lambert  
**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  
For example  
`g++ relerr.cpp`    
will produce an executable.  

**Description/Purpose:**   
This routine gives you an relative error between a machine value and an expected value   

**Input:**  
There are two inputs, both doubles. The first input is the expected value. The second input is the machine value.  

**Output:**   
returns a double which is the relative error.

**Usage/Example:**     
You will call the function with two arguments, as previously stated, like:
```c++
std::cout << relerr(10.0, 10.1);
```
and the output for this line will look like:
```
0.01
```
which is the relative error between the two values.

**code for relerr:** 

```c++
#include <iostream>
#include <cmath>

double relerr(double expval, double machval)
{
  return std::abs(expval - machval)/std::abs(expval);
}
```
