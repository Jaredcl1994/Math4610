#include <iostream>
#include <cmath>

double* roots(double a, double b, double c)
{
  double firstval = (-b + sqrt(b*b-4*a*c))/(2*a);
  double secondval = (-b - sqrt(b*b-4*a*c))/(2*a);
  double returnval[] = {firstval, secondval};
  std::cout << returnval[0] << " " << returnval[1];
  return returnval;
}

int main()
{
  roots(2.0, 5.0, 9.0/8.0);
  return 0;
}
