# Math 4610 Fundamentals of Computational Mathematics Software Manual TRANSPOSE File

**Routine Name:**           transpose

**Author:** Jared Lambert

**Language:** C++, the code can be compiled using the GNU C++ compiler (g++). 

For example,

    g++ -o vect transpose.cpp

**Description/Purpose:** This routine gives you the transpose of a matrix.     
    


**Input:** There is one input, a matrix of type std::vector<std::vector<double>>.  
    

**Output:** returns an std::vector<std::vector<double>> matrix which is the transpose an input matrix.  
  

**Usage/Example:**
You will call the function with one argument, as previously stated, like:  
```c++
int main()
{
  std::vector<std::vector<double>> a{{1,2,4}, {1,2,5}, {6,2,6}};
  
  std::vector<std::vector<double>> c = transpose(a);
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

which is the transpose.

**Implementation/Code:**  

```c++

#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

std::vector<std::vector<double>>  transpose(std::vector<std::vector<double>> a)
{
  std::vector<double> x{};
  for(int i = 0; i < a.size(); i++)
    {
      x.push_back(a[i].size());
      if(i < a.size()-1)
      assert(a[i].size() == a[i+1].size());
    }
  
  std::vector<std::vector<double>> c(x[0], std::vector<double> (x.size()));
  for(int i = 0; i < x.size(); i++)
    {
      for(int j = 0; j < x[i]; j++)
        {
	  c[j][i] = a[i][j];
	}
    }
  return c;
}


```

**Last Modified:** October/2018







