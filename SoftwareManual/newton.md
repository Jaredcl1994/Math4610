# Math 4610 Fundamentals of Computational Mathematics Software Manual NEWTON File

**Routine Name:**           newton

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ newton.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o newton newton.cpp

**Description/Purpose:** This routine finds a root of a function within a bound.         


**Input:** There are three inputs, 2 doubles and an integer. The first input is a guess at the root, the second input is the error tolerance, the third input is an integer or maximum iterations.  


**Output:** returns a double which is the approximated root.
  

**Usage/Example:**
You will call the function with three arguments, as previously stated, like:
```c++
std::cout << newton(-5.0, 0.0001, 7);
```
and the output for this line will return some double, depending on the function in use. The function is hard coded into the routine.  


**Implementation/Code:** The following is the code for newton()
``` c++
#include <iostream>
#include <cmath>

double newton(double x, double tol, int maxiter)
{
  int iter = 0;
  double error = 10 * tol;
  double xnext;
  double fx;
  double fxp;
  while(error > tol && iter < maxiter)
    {
      iter++;
      fx = std::pow(x,2.0) - 3;
      fxp = 2 * x;
      xnext = x - fx/fxp;
      error = std::abs(xnext - x);
      x = xnext;
    }
  return x;
}


```
**Last Modified:** September/2018
