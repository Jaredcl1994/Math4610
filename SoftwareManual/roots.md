# Math 4610 Fundamentals of Computational Mathematics Software Manual ROOTS File
  
**Routine Name:**           roots

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ roots.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o roots roots.cpp

**Description/Purpose:** This routine computes the real roots of a polynomial (as large as x^2) and prints them.  


**Input:** Input the values a, b, and c of your polynomial. If you input an 'a' value of 0, then it will return an error.  


**Output:** returns a string containing the roots separated by a comma and a space. If the root is imaginary, it will return a complex number signified by an i at the end. 

**Usage/Example:**
```
`     std::cout << roots(2.0,5.0,10.0);`  
```  
Output from the lines above:

    -1.250000-1.854050*i, -1.250000+1.854050*i  

The first value uses a minus sign and the second uses a plus.  

**Implementation/Code:** The following is the code for roots()
``` c++
#include <iostream>
#include <cmath>
#include <string>

std::string roots(double a, double b, double c)
{
  if (a == 0) return "please enter a non zero value for a.";
  bool imagine = false;
  double inside = b*b-4*a*c;
  std::string firststring;;
  std::string secondstring;
  double firstval;
  double secondval;
  if(inside < 0)
    {
      std::string thirdstring;
      double thirdval;
      inside = -1*inside;
      firstval = -b/(2*a);
      secondval = sqrt(inside)/(2*a);
      firststring = std::to_string(firstval);
      secondstring = std::to_string(secondval) + "*i";
      return firststring + "-" + secondstring + ", " + firststring + "+" + secondstring;
    }
  else
    {
      firstval = (-b - sqrt(b*b-4*a*c))/(2*a);
      secondval = (-b + sqrt(b*b-4*a*c))/(2*a);
      firststring = std::to_string(firstval);
      secondstring = std::to_string(secondval);

      return firststring + ", " + secondstring;
    }
}


```
**Last Modified:** September/2018
