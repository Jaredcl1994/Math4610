# Math 4610 Fundamentals of Computational Mathematics Software Manual HELLO File

**Routine Name:**           hello

**Author:** Joe Koebbe

**Language:** Fortran, the code can be compiled using the GNU fortran compiler (gfortran). 

For example,

    gfortran hello.f

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    gfortran -o hello hello.f

**Description/Purpose:** This routine tells you how many processers you have and shows routines running in parallel.  
      


**Input:** There are no inputs     


**Output:** prints the number of thread as they run in parallel. At the end will print the total number of threads. see output example [here](https://jaredcl1994.github.io/math4610/homework1/output.png)     
  

**Usage/Example:**
Just compile and execute the code.

**Implementation/Code:** The following is the code for hello
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
**Last Modified:** September/2018
