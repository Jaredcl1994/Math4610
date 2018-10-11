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
/*
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
*/
