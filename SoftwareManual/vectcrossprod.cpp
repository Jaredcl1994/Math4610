#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

std::vector<double>  vectcrossprod(std::vector<double> a, std::vector<double> b)
{
  int x = a.size();
  int y = b.size();
  assert(x == y);
  std::vector<double> c;
  int j = 0;
  int k = 0;
  for(int i = 0; i < x; i++)
    {
      j = (i + 1)%x;
      k = (i + 2)%x;
      double l = a[j] * b[k] - a[k]*b[j];
      c.push_back(l);
    }
  return c;
}
/*
int main()
{
  std::vector<double> a = {1,2,3};
  std::vector<double> b = {0,1,2};
  std::vector<double> c = vectcrossprod(a,b);
  for(auto x:c)
    {
      std::cout << x << std::endl;
    }
  return 0;
}
*/
