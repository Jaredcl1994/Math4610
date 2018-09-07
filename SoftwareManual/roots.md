********************************************************
**Routine Name: roots**  
**Author:** Jared Lambert  
**Language:** C++, the code can be compiled using the GNU C++ compiler (g++).  
For example  
`g++ roots.cpp`      
will produce an executable.   

**Description/Purpose:**   
This routine computes the real roots of a polynomial (as large as x^2) and prints them.  

**Input:**   
Input the values a, b, and c of your polynomial.  

**Output:**   
returns a pointer to an array containing the roots and prints them.   

**Usage/Example:**  
`roots(2,5,9.0/8.0)`    
**Output from that line:**  
`-0.25 -2.25`    
**Code for roots:**  
```c++
#include <iostream>
#include <cmath>

double* roots(double a, double b, double c)
{
  double firstval = (-b + sqrt(b*b-4*a*c))/(2*a);
  double secondval = (-b - sqrt(b*b-4*a*c))/(2*a);
  double returnval[] = {firstval, secondval};
  std::cout << returnval[0] << " " << returnval[1];
  return returnval;
}

```
