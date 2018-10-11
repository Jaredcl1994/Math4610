# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTCROSSPROD File

**Routine Name:**           vectcrossprod

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vect abserr.cpp

**Description/Purpose:** This routine gives you the cross product of two vectors.     
    


**Input:** There are two inputs, both of type std::vector<double>.  
    

**Output:** returns an std::vector<double> which is the cross product of the two input vectors.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  std::vector<double> a = {1,2,3};
  std::vector<double> b = {0,1,2};
  std::vector<double> c = vectcrossprod(a,b);
  for(auto x:c)
    {
      std::cout << x << std::endl;
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

**Last Modified:** October/2018
