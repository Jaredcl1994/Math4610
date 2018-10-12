#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

std::vector<std::vector<double>>  matrixadd(std::vector<std::vector<double>> a, std::vector<std::vector<double>> b)
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
	  double z = a[i][j] + b[i][j];
	  c[i][j] = z;
	}
    }
  return c;
}

int main()
{
  std::vector<std::vector<double>> a{{1,2,4}, {1,2,5}};
  std::vector<std::vector<double>> b{{0,1, 5}, {2,1, 7.3}};
  
  std::vector<std::vector<double>> c = matrixadd(a,b);
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

