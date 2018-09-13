**Routine Name:** derivative  
**Author:** Jared Lambert  
**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  
For example  
`g++ -c derivative.cpp`    
will produce an object to be included in a shared library 

**Description/Purpose:**   
This routine computes an approximation of the derivative, with precision limited by h  

**Input:**  
There are two inputs, both doubles. The first input is the x value, meaning the independent variable. The second input is h, or the incremement. With a smaller h the precision increases, to a point.  

**Output:**   
returns a double which is the approximated the derivative.

**Usage/Example:**     
You will call the function with two arguments, as previously stated, like:
```c++
std::cout << derivative(3.14159, 0.5);
```
and the output for this line will return some double, depending on the function in use.
To fun a code continually approaching a precise approximation, you will use:  
```
#include <iostream>
#include <cmath>
#include <fstream>
#include "relerr.cpp"
#include "abserr.cpp"
#include "derivative.cpp"

int main()
{
  double h = 1.0;
  double x = 3.14159/3.0;
  double expval = std::cos(x);
  std::ofstream of;
  of.open("/home/jared/Classes/Math4610/HW2/derivative_results_1.txt");

  for(int i = 0; i < 100; i++)
    {
      double machval = derivative(x,h);
      of<< i << " ";
      h = h/2;
    }
  of.close();
  return 0;
}

```
Which creates a file called "derivative_results_1.txt. must use a shared library, instructions for creating a shared library in software manual
**code for derivative:** 

```c++
#include <iostream>
#include <cmath>

double derivative(double x, double h)
{
  double top = std::sin(x + h) - std::sin(x);
  double bottom = h;
  return top/bottom;
}
```

