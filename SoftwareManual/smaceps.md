*******************************************************
**Routine Name: smaceps**  
Author: Jared Lambert  
Language: C++. The code can be compiled using the GNU C++ compiler (g++).  
For example  
`g++ smaceps.cpp`    
will produce an executable.  

Description/Purpose:   
This routine computes the single precision (float in C++) precision value for the machine epsilon. It tells you how many digits will be accurate for a certain computer using single digit precision.  

Input:  
There are no inputs.  

Output:   
returns an integer (the number of binary digits that define the machine epsilon) and prints the integer and a number which describes the smallest number that allows accurate calculations in single precision.    

Usage/Example:    
`smaceps();`      
Output from that line:    
`24 5.96046e-08`    
code for smaceps:    
```c++
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
```


********************************************************

