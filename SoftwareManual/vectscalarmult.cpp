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
/*
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
*/
