# Math 4610 Fundamentals of Computational Mathematics Software Manual MATRIXSCALARMULT File

**Routine Name:**           matrixscalarmult

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vect matrixscalarmult.cpp

**Description/Purpose:** This routine gives you the product of a double and a matrix.     
    


**Input:** There are two inputs, one double and a matrix of type std::vector<std::vector<double>>.  
    

**Output:** returns an std::vector<std::vector<double>> matrix which is the product of a double and an input matrix.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:  
```c++
int main()
{
  std::vector<std::vector<double>> a{{1,2,4}, {1,2,5}, {6,2,6}};
  
  std::vector<std::vector<double>> c = matrixscalarmult(3.0, a);
  for(int i = 0; i < c.size(); i ++)
    {
      for(int j = 0; j < c[i].size(); j++)
	{
	  std::cout << c[i][j] << " ";
	}
      std::cout <<  std::endl;
    }
  return 0;
}
```
and the output for this line will look like:    
```
3 6 12
3 6 15
18 6 18
```  

which is the product.

**Implementation/Code:**  

```c++

#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

std::vector<std::vector<double>>  matrixscalarmult(double b, std::vector<std::vector<double>> a)
{
  std::vector<double> x{};
  for(int i = 0; i < a.size(); i++)
    {
      x.push_back(a[i].size());
      if(i < a.size()-1)
      assert(a[i].size() == a[i+1].size());
    }
  std::vector<std::vector<double>> c(x.size(), std::vector<double> (x[0]));
  for(int i = 0; i < x.size(); i++)
    {
      for(int j = 0; j < x[i]; j++)
        {
	  c[i][j] = a[i][j] * b;
	}
    }
  return c;
}


```

**Last Modified:** October/2018



