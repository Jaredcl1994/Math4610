# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTINNERPROD File

**Routine Name:**           vectinnerprod

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vectinnerprod.cpp  

**Description/Purpose:** This routine gives you the inner product of two vectors.     
    


**Input:** There are two inputs, both of type std::vector<double>.  
    

**Output:** returns a double which is the inner product of the two input vectors.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  double* a = {1,2,3};
  double* b = {0,1,2};
  double c = vectinnerprod(a,b);
  std::cout << c << std::endl;
  return 0;
}


```
and the output for this line will look like:    
```
8
```  

which is the inner product.  

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

double vectinnerprod(double* a,double* b, int size)
{
  double c = 0.0;
  for(int i = 0; i < x; i++)
    {
      c = c + a[i] * b[i];
    }
  return c;
}
```  
  
**Last Modified:** October/2018
