# Math 4610 Fundamentals of Computational Mathematics Software Manual VECTORADD File

**Routine Name:**           vectoradd

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vectoradd.cpp  

**Description/Purpose:** This routine gives you the sum of two vectors.     
    


**Input:** There are two inputs, both of type std::vector<double>.  
    

**Output:** returns an std::vector<double> which is the sum of the two input vectors.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:
```c++
int main()
{
  std::vector<double> a = {1,2,3};
  std::vector<double> b = {0,1,2};
  std::vector<double> c = vectoradd(a,b);
  for(auto x:c)
    {
      std::cout << x << std::endl;
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

std::vector<double>  vectoradd(std::vector<double> a, std::vector<double> b)
{
  int x = a.size();
  int y = b.size();
  assert(x == y);
  std::vector<double> c;
  for(int i = 0; i < x; i++)
    {
      c.push_back(a[i] + b[i]);
    }
  return c;
}
```  
  
**Last Modified:** October/2018