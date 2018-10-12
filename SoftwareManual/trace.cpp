#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

double  trace(std::vector<std::vector<double>> a)
{
  std::vector<double> x{};
  for(int i = 0; i < a.size(); i++)
    {
      x.push_back(a[i].size());
      if(i < a.size()-1)
      assert(a[i].size() == a[i+1].size());
    }
  assert(x.size() == x[0]);
  double c = 0.0;
  for(int i = 0; i < x.size(); i++)
    {
      c = c + a[i][i];
    }
  return c;
}

int main()
{
  std::vector<std::vector<double>> a{{1,2,4}, {1,2,5}, {6,2,6}};
  
  double c = trace(a);
  std::cout << "c: " << c << std::endl;
  for(int i = 0; i < a.size(); i ++)
    {
      for(int j = 0; j < a[i].size(); j++)
	{
	  std::cout << a[i][j] << " ";
	}
      std::cout <<  std::endl;
    }
  return 0;
}

