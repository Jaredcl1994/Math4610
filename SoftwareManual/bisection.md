# Math 4610 Fundamentals of Computational Mathematics Software Manual BISECTION File

**Routine Name:**           bisection

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ bisection.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o bisection bisection.cpp

**Description/Purpose:** This routine finds a root of a function within a bound.         


**Input:** There are three inputs, all doubles. The first input is the lower bound, the second input is the upper bound, the third input is error tolerance.  


**Output:** returns a double which is the approximated root.
  

**Usage/Example:**
You will call the function with three arguments, as previously stated, like:
```c++
std::cout << bisection(-5.0, 0, 0.001);
```
and the output for this line will return some double, depending on the function in use. The function is hard coded into the function.  


**Implementation/Code:** The following is the code for bisection()
``` c++
#include <iostream>
#include <cmath>

int maxiter(double a, double b, double tol)
{
  int result = log2(tol/std::abs(b-a))/log2(0.5);
  return result + 1;
}


double bisection(double& a, double& b, double tol)
{
  double mid;
  double error = 10 * tol;
  double fa = std::pow(a,2.0)-3;
  double fb = std::pow(b,2.0)-3;
  int maxiter1 = maxiter(a, b, tol);
  double fmid;

  if((fa*fb)>0){std::cout << "error. there may not be a root in this interval. Please double check your function." << std::endl;}
  
  for(int i = 0; i < maxiter1; i++)
    {
      mid = (a + b)/2.0;
      fmid = std::pow(mid,2.0)-3;
      if((fa*fb)==0)
	{
	  if(fa == 0){return a;}
	  else{return b;}
	}
      if(fa*fmid < 0)
	{
	  b = mid;
	  fb = fmid;
	}
      else
	{
	  a = mid;
	  fa = fmid;
	}
      error = b-a;
      
    }
  return mid;
}



```
**Last Modified:** September/2018
