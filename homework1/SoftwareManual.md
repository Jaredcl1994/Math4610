This is the software manual for my first homework set. 
*******************************************************
Routine Name: smaceps
Author: Jared Lambert
Language: C++. The code can be compiled using the GNU C++ compiler (g++).
For example
#g++ HW1.cpp
will produce an executable. 
Description/Purpose: This routine computes the single precision (float in C++) precision value for the machine epsilon. It tells you how many digits will be accurate for a certain computer using single digit precision.
Input: There are no inputs.
Output: returns an integer (the number of binary digits that define the machine epsilon) and prints the integer and a number which describes the smallest number that allows accurate calculations in single precision.
Usage/Example:
#smaceps();
Output from that line:
#24 5.96046e-08
code for smaceps:

float smaceps()
{
  float seps = 1.0;
  int ipow = 0;
  float one = 1.0;
  float appone = one + seps;

  for(int i = 0; i < 1000; i ++)
    {
      ipow = ipow + 1;
      seps = seps/2;
      appone = one + seps;

      if((appone - one) == 0.0)
	{
	  std::cout << ipow << " " << seps << std::endl;
	  return ipow;
	}
    }
  return 0;
}



********************************************************
Routine Name: maceps
Author: Jared Lambert
Language: C++, the code can be compiled using the GNU C++ compiler (g++).
For example
#g++ HW1couble.cpp
will produce an executable. 
Description/Purpose: This routine computes the double precision (double in C++) precision value for the machine epsilon. It tells you how many digits will be accurate for a certain computer using double digit precision.
Input: There are no inputs.
Output: returns an integer (the number of binary digits that define the machine epsilon) and prints the integer and a number which describes the smallest number that allows accurate calculations in double precision.
Usage/Example:
#maceps();
Output from that line:
#53 1.11022e-16
code for maceps:

double maceps()
{
  double seps = 1.0;
  int ipow = 0;
  double one = 1.0;
  double appone = one + seps;

  for(int i = 0; i < 1000; i ++)
    {
      ipow = ipow + 1;
      seps = seps/2;
      appone = one + seps;

      if((appone - one) == 0.0)
	{
	  std::cout << ipow << " " << seps << std::endl;
	  return ipow;
	}
    }
  return 0;
}



********************************************************
Routine Name: roots
Author: Jared Lambert
Language: C++, the code can be compiled using the GNU C++ compiler (g++).
For example
#g++ roots.cpp
will produce an executable. 
Description/Purpose: This routine computes the real roots of a polynomial (as large as x^2) and prints them.
Input: Input the values a, b, and c of your polynomial.
Output: returns a pointer to an array containing the roots and prints them. 
Usage/Example:
#roots(2,5,9.0/8.0)
Output from that line:
#-0.25 -2.25
Code for roots:

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
