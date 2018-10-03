# Math 4610 Fundamentals of Computational Mathematics Software Manual Template File
  
**Routine Name:** hybridNewt   
  
**Author:** Jared Lambert  
  
**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  
For example  
  ```  
`g++ hybridNewt.cpp`    
 ``` 
will produce an executable.  

**Description/Purpose:**   This routine gives you an approximation of a root of a function.
  
**Input:**  There are four inputs, the first three are doubles, the last is an integer. The first input is the lower bound,the 
second is the upper bound, the third is the error tolerance, and the fourth is the number of max iterations for the newton method.      
  
**Output:**   returns a double which is the relative error.
  
**Usage/Example:**  
  
You will call the function with two arguments, as previously stated, like:
```c++
std::cout << hybridNewt(0.0, 5.0, 0.001, 7);
```
and the output for this line will look like:
```
0.01
```
which is a root of the hardcoded function 

**Implementation/Code:** 

```c++
#include <iostream>
#include <cmath>
#include "bisection.cpp"
#include "newton.cpp"

double hybridNewt(double a, double b, double tol, int maxiter1)
{
  double approx = bisection(a,b,0.01);
  return newton(approx,tol,maxiter1);
}



```
**Last Modified:** September/2018
