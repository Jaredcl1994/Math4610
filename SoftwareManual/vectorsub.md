# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTORSUB File

**Routine Name:**           vectorsub  

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vectorsub.cpp  

**Description/Purpose:** This routine gives you the difference of two vectors.     
    


**Input:** There are four inputs, first two arrays are the arrays to be operated on. Third is an array passed in by reference for your results to be stored. Forth is an integer containing size of arrays.  
    

**Output:** returns a pointer to the array you passed in, which is the difference of the first two input vectors.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  int size = 3;
  double a[] = {1,2,3};
  double b[] = {0,1,2};
  double *c = new double[size];
  c = vectorsub(a,b,c,size);
  for(int i = 0; i < size; i++)
    {
      std::cout << c[i] << std::endl;
    }
  return 0;
}
```
and the output for this line will look like:    
```
1
1
1
```  

which is the difference.    

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>

double*  vectorsub(double* a, double* b, double* c, int size)
{
  for(int i = 0; i < size; i++)
    {
      c[i] = (a[i] - b[i]);
    }
  return c;
}
```  
  
**Last Modified:** October/2018
