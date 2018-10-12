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

