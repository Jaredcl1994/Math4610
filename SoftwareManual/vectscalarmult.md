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
  double a = 1.5;
  std::vector<double> b = {0,1,2};
  std::vector<double> c = vectscalarmult(a,b);
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

std::vector<double>  vectscalarmult(double a, std::vector<double> b)
{
  int y = b.size();
  assert(y > 0);
  std::vector<double> c;
  for(int i = 0; i < y; i++)
    {
      c.push_back(a * b[i]);
    }
  return c;
}
```  
  
**Last Modified:** October/2018
