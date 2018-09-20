# Math 4610 Fundamentals of Computational Mathematics Software Manual DERIVATIVE2 File

**Routine Name:**           derivative2

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ derivative2.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o derivative derivative2.cpp

**Description/Purpose:** This routine computes an approximation of the derivative, with precision limited by h. It is changed from derivative1 by multiplying by the conjugate.        


**Input:** There are two inputs, both doubles. The first input is the x value, meaning the independent variable. The second input is h, or the incremement. With a smaller h the precision increases, to a point.    


**Output:** returns a double which is the approximated derivative.
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
std::cout << derivative2(3.14159, 0.5);
```
and the output for this line will return some double, depending on the function in use.
To fun a code continually approaching a precise approximation, you will use:  
```c++
#include <iostream>
#include <cmath>
#include <fstream>
#include "relerr.cpp"
#include "abserr.cpp"
#include "derivative1.cpp"

int main()
{
  double h = 1.0;
  double x = 3.14159/3.0;
  double expval = std::cos(x);
  std::ofstream of;
  of.open("/home/jared/Classes/Math4610/HW2/derivative_results_1.txt");

  for(int i = 0; i < 100; i++)
    {
      double machval = derivative2(x,h);
      of<< i << " ";
      h = h/2;
    }
  of.close();
  return 0;
}
 
```  
Which creates a file called "derivative_results_1.txt. must use a shared library, instructions for creating a shared library in software manual

**Implementation/Code:** The following is the code for derivative2()
``` c++
#include <iostream>
#include <cmath>

double derivative2(double x, double h)
{
  double add = x + h;
  double top = 1;
  double bottom = std::pow((add),(0.5))+std::pow(x,(0.5));
  return top/bottom;
}


```
**Last Modified:** September/2018
