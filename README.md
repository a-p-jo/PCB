# PCB
Small Python v C Benchmark

PCB takes a 'Load Value' and a 'Repeat Count' as command-line arguments.
For example, `./PCB 1.5 5` or `./PCB.py 1.5 5` here, for 5 timed iterations, prime numbers are searched between 2 and (1.5 * 10^7) using modulo division.

The number of primes found, total number of iterations, the avg iteration time as well as total time is output.

PCB does not purport to be an accurate benchmark for purpose of 
comparing performance across systems/processors.It tests only for
integer division , supplies only CPU time, and compiler/OS 
optimizations may vary.
