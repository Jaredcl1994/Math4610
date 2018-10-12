# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTCROSSPROD File

**Routine Name:**           vectcrossprod

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vect abserr.cpp

**Description/Purpose:** This routine gives you the cross product of two vectors.     
    


**Input:** There are four inputs, first two double arrays are the arguments in the operation. The third is a double array which is passed in by reference and will store your results. The fourth is an int giving the size of each array.  
    

**Output:** returns a pointer to an array of doubles which is the cross product of the two input vectors.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  int size = 3;
  double a[] = {1,2,3};
  double b[] = {0,1,2};
  double* c = new double[size];
  c = vectcrossprod(a,b,c,size);
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
-2
1
```  

which is the cross product from first entry to last.

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>

double*  vectcrossprod(double* a, double* b, double* c, int size)
{
  int j = 0;
  int k = 0;
  for(int i = 0; i < size; i++)
    {
      j = (i + 1)%size;
      k = (i + 2)%size;
      double l = a[j] * b[k] - a[k]*b[j];
      c[i] = l;
    }
  return c;
}
```

**Last Modified:** October/2018
