# Math 4610 Fundamentals of Computational Mathematics Software Manual Template File
  
**Routine Name:** hybridSec   
  
**Author:** Jared Lambert  
  
**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  
For example  
  ```  
`g++ hybridSec.cpp`    
 ``` 
will produce an executable.  

**Description/Purpose:**   This routine gives you an approximation of a root of a function. It uses bisection to reduce the error to 0.1, 
then secant method to narrow in to whatever tolerance you list, or to the max number of iterations.
  
**Input:**  There are four inputs, the first three are doubles, the last is an integer. The first input is the lower bound,the 
second is the upper bound, the third is the error tolerance, and the fourth is the number of max iterations for the newton method.      
  
**Output:**   returns a double which is an approximation of a root of a function hardcoded in the routine.
  
**Usage/Example:**  
  
You will call the function with four arguments, as previously stated, like:
```c++
std::cout << hybridSec(0.0, 5.0, 0.001, 7);
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
#include "secant.cpp"

double hybridSec(double a, double b, double tol, int maxiter1)
{
  double approx = bisection(a,b,0.01);
  std::cout << approx << std::endl;
  // there is something wrong with my secant function. If the range is too large it cannot find the function. I don't know if that's a limit of the method or if my function is written poorly.
  return secant(a,approx,tol,maxiter1);
}


```
**Last Modified:** September/2018
