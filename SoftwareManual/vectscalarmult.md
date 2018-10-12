# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTSCALARMULT File

**Routine Name:**           vectscalarmult  

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vectscalarmult.cpp  

**Description/Purpose:** This routine gives you the product of a double and a vector.     
    


**Input:** There are two inputs, one of type double, and one of type std::vector<double>.  
    

**Output:** returns an std::vector<double> which is the product of the input vector and the scalar multiple.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  int size = 3;
  double a = 1.5;
  double b[] = {0,1,2};
  double *c = new double[size];
  c = vectscalarmult(a,b,c,size);
  for(int i = 0; i < size; i++)
    {
      std::cout << c[i] << std::endl;
    }
  return 0;
}
```
and the output for this line will look like:    
```
0
1.5
3
```  

which is the product.    

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

double*  vectscalarmult(double a, double* b, double* c, int size)
{
  assert(size > 0);
  for(int i = 0; i < size; i++)
    {
      c[i]=(a * b[i]);
    }
  return c;
}
```  
  
**Last Modified:** October/2018
