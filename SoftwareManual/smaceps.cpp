#include <iostream>


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
  