# Math 4610 Fundamentals of Computational Mathematics Software Manual MATRIXSUB File

**Routine Name:**           matrixsub

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vect matrixsub.cpp

**Description/Purpose:** This routine gives you the difference of 2 matrices.     
    


**Input:** There are 2 inputs, both matrices of type std::vector<std::vector<double>>.  
    

**Output:** returns an std::vector<std::vector<double>> matrix which is the difference of 2 input matrices.  
  

**Usage/Example:**
You will call the function with two arguments, as previously stated, like:  
```c++
int main()
{
  std::vector<std::vector<double>> a{{1,2,4}, {1,2,5}};
  std::vector<std::vector<double>> b{{0,1, 5}, {2,1, 7.3}};
  
  std::vector<std::vector<double>> c = matrixsub(a,b);
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
1 1 6
2 2 2
4 5 6
```  

which is the difference.

**Implementation/Code:**  

```c++
#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

std::vector<std::vector<double>>  matrixsub(std::vector<std::vector<double>> a, std::vector<std::vector<double>> b)
{
  std::vector<double> x{};
  for(int i = 0; i < a.size(); i++)
    {
      x.push_back(a[i].size());
    }
  assert(b.size() == a.size());
  int even = x[0];
  std::vector<double> y{};
  for(int i = 0; i < b.size(); i++)
    {
      assert(x[i] == even);
      y.push_back(b[i].size());
    }
  for(int i = 0; i < x.size(); i++)
    {
      assert(x[i] == y[i]);
    }
  
  std::vector<std::vector<double>> c(x.size(), std::vector<double> (x[0]));
  for(int i = 0; i < x.size(); i++)
    {
      for(int j = 0; j < x[i]; j++)
        {
	  double z = a[i][j] - b[i][j];
	  c[i][j] = z;
	}
    }
  return c;
}
```

**Last Modified:** October/2018











