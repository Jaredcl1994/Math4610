#include <iostream>
#include <cmath>
#include <assert.h>
#include <vector>

double vectinnerprod(std::vector<double> a, std::vector<double> b)
{
  int x = a.size();
  int y = b.size();
  assert(x == y);
  double c = 0.0;
  for(int i = 0; i < x; i++)
    {
      c = c + a[i] * b[i];
    }
  return c;
}
/*
int main()
{
  std::vector<double> a = {1,2,3};
  std::vector<double> b = {0,1,2};
  double c = vectinnerprod(a,b);
  std::cout << c << std::endl;
  return 0;
}
*/
