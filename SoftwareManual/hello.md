**Routine Name: [hello](https://github.com/Jaredcl1994/math4610/blob/master/homework1/HW1.cpp)**  
**Author:** Joe Koebbe  
**Language:** Fortran. The code can be compiled using the GNU C++ compiler (g++).  
For example  
`gfortran hello.f`    
will produce an executable.  

**Description/Purpose:**   
This routine tells you how many processers you have and shows routines running in parallel.  

**Input:**  
There are no inputs.  

**Output:**   
prints the number of thread as they run in parallel. At the end will print the total number of threads. see output example [here](https://jaredcl1994.github.io/math4610/homework1/output.png)   

**Usage/Example:**     
just compile and execute code   
code for smaceps: 

```fortran
      program main
      integer id, nthrds
      integer omp_get_thread_num, omp_get_num_threads
C$OMP PARALLEL PRIVATE(id)
      id = omp_get_thread_num()
      print *, 'hello world from thread', id
C$OMP BARRIER
      if(id .eq. 0) then
        nthrds = omp_get_num_threads()
        print *, 'There are', nthrds, ' threads!'
      end if
C$OMP END PARALLEL
      stop
      end
          
```


********************************************************

