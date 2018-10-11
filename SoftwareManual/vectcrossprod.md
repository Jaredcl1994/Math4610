# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTCROSSPROD File

**Routine Name:**           vectcrossprod

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

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

std::vector<double>  vectcrossprod(std::vector<double> a, std::vector<double> b)
{
  int x = a.size();
  int y = b.size();
  assert(x == y);
  std::vector<double> c;
  int j = 0;
  int k = 0;
  for(int i = 0; i < x; i++)
    {
      j = (i + 1)%x;
      k = (i + 2)%x;
      double l = a[j] * b[k] - a[k]*b[j];
      c.push_back(l);
    }
  return c;
}
```

**Last Modified:** September/2018
