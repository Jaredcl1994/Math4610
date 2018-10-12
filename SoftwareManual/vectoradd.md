# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTORADD File

**Routine Name:**           vectoradd

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vectoradd.cpp  

**Description/Purpose:** This routine gives you the sum of two vectors.     
    


**Input:** There are four inputs. The first two are the arrays you will be adding. The third is an array of the same size that you pass in by reference and which will contain your results. The fourth is the size of the arrays.  
    

**Output:** returns a pointer to the array which you passed in, which is the sum of the two input vectors.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  int size = 3;
  double a[] = {1,2,3};
  double b[] = {0,1,2};
  double *c = new double[size];
  c = vectoradd(a,b,c,size);
  for(int i = 0; i < size; i++)
    {
      std::cout << c[i] << std::endl;
    }
  return 0;
}
```
and the output for this line will look like:    
```
8
```  

which is the sum.    

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

double*  vectoradd(double* a, double* b, double* c, int size)
{
  for(int i = 0; i < size; i++)
    {
      c[i] = (a[i] + b[i]);
    }
  return c;
}
```  
  
**Last Modified:** October/2018
