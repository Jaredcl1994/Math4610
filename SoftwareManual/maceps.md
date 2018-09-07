**Routine Name:** maceps    
**Author:** Jared Lambert  
**Language:** C++, the code can be compiled using the GNU C++ compiler (g++).  
For example  
`g++ maceps.cpp`    
will produce an executable.   

**Description/Purpose:**   
This routine computes the double precision (double in C++) precision value for the machine epsilon. It tells you how many digits will be accurate for a certain computer using double digit precision.  

**Input:**   
There are no inputs.  

**Output:**   
returns an integer (the number of binary digits that define the machine epsilon) and prints the integer and a number which describes the smallest number that allows accurate calculations in double precision.  

**Usage/Example:**  
`maceps();`    
**Output from that line:**  
`53 1.11022e-16`    
**code for maceps:**  
```c++
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
```

